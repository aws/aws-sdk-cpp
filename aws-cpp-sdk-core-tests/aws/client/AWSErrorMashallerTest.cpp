/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 * 
 *  http://aws.amazon.com/apache2.0
 * 
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#include <aws/external/gtest.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>

using namespace Aws::Client;

TEST(AWSErrorMashallerTest, TestErrorsWithPrefixParse)
{
    AWSErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    Aws::String exceptionPrefix = "blahblahblah#";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(exceptionPrefix + "IncompleteSignatureException", message);
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "IncompleteSignature", message);
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InternalFailure", message);
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalFailure", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InternalServerError", message);
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalServerError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidAction", message);
    ASSERT_EQ(CoreErrors::INVALID_ACTION, error.GetErrorType());
    ASSERT_EQ("InvalidAction", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidClientTokenId", message);
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenId", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidClientTokenIdException", message);
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenIdException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidParameterCombination", message);
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, error.GetErrorType());
    ASSERT_EQ("InvalidParameterCombination", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidParameterValue", message);
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_VALUE, error.GetErrorType());
    ASSERT_EQ("InvalidParameterValue", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidQueryParameter", message);
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameter", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidQueryParameterException", message);
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MalformedQueryString", message);
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryString", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MalformedQueryStringException", message);
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryStringException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MissingAuthenticationToken", message);
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationToken", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MissingAuthenticationTokenException", message);
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationTokenException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MissingParameterException", message);
    ASSERT_EQ(CoreErrors::MISSING_PARAMETER, error.GetErrorType());
    ASSERT_EQ("MissingParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "OptInRequired", message);
    ASSERT_EQ(CoreErrors::OPT_IN_REQUIRED, error.GetErrorType());
    ASSERT_EQ("OptInRequired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "RequestExpired", message);
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "RequestExpiredException", message);
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpiredException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ServiceUnavailable", message);
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailable", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ServiceUnavailableException", message);
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailableException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "Throttling", message);
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("Throttling", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ThrottlingException", message);
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("ThrottlingException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ValidationError", message);
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ValidationErrorException", message);
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationErrorException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "AccessDenied", message);
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDenied", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "AccessDeniedException", message);
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDeniedException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ResourceNotFound", message);
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFound", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ResourceNotFoundException", message);
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFoundException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "UnrecognizedClient", message);
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClient", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "UnrecognizedClientException", message);
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClientException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "IDon'tExist", "JunkMessage");
    ASSERT_EQ(CoreErrors::UNKNOWN, error.GetErrorType());
    ASSERT_EQ(exceptionPrefix + "IDon'tExist", error.GetExceptionName());
    ASSERT_EQ("Unable to parse ExceptionName: " + exceptionPrefix + "IDon'tExist Message: JunkMessage", error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());
}

TEST(AWSErrorMashallerTest, TestErrorsWithoutPrefixParse)
{
    AWSErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    Aws::String exceptionPrefix = "";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(exceptionPrefix + "IncompleteSignatureException", message);
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "IncompleteSignature", message);
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InternalFailure", message);
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalFailure", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InternalServerError", message);
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalServerError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidAction", message);
    ASSERT_EQ(CoreErrors::INVALID_ACTION, error.GetErrorType());
    ASSERT_EQ("InvalidAction", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidClientTokenId", message);
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenId", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidClientTokenIdException", message);
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenIdException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidParameterCombination", message);
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, error.GetErrorType());
    ASSERT_EQ("InvalidParameterCombination", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidParameterValue", message);
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_VALUE, error.GetErrorType());
    ASSERT_EQ("InvalidParameterValue", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidQueryParameter", message);
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameter", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "InvalidQueryParameterException", message);
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MalformedQueryString", message);
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryString", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MalformedQueryStringException", message);
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryStringException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MissingAuthenticationToken", message);
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationToken", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MissingAuthenticationTokenException", message);
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationTokenException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "MissingParameterException", message);
    ASSERT_EQ(CoreErrors::MISSING_PARAMETER, error.GetErrorType());
    ASSERT_EQ("MissingParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "OptInRequired", message);
    ASSERT_EQ(CoreErrors::OPT_IN_REQUIRED, error.GetErrorType());
    ASSERT_EQ("OptInRequired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "RequestExpired", message);
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "RequestExpiredException", message);
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpiredException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ServiceUnavailable", message);
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailable", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ServiceUnavailableException", message);
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailableException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "Throttling", message);
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("Throttling", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ThrottlingException", message);
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("ThrottlingException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ValidationError", message);
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ValidationErrorException", message);
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationErrorException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "AccessDenied", message);
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDenied", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "AccessDeniedException", message);
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDeniedException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ResourceNotFound", message);
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFound", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "ResourceNotFoundException", message);
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFoundException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "UnrecognizedClient", message);
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClient", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "UnrecognizedClientException", message);
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClientException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(exceptionPrefix + "IDon'tExist", "JunkMessage");
    ASSERT_EQ(CoreErrors::UNKNOWN, error.GetErrorType());
    ASSERT_EQ(exceptionPrefix + "IDon'tExist", error.GetExceptionName());
    ASSERT_EQ("Unable to parse ExceptionName: " + exceptionPrefix + "IDon'tExist Message: JunkMessage", error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

}


