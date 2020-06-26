/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

package com.amazonaws.util.awsclientgenerator.transform;

import java.util.HashSet;
import java.util.Set;

public class CoreErrors
{
    public static final Set<String> VARIANTS = new HashSet<>();

    static {
        VARIANTS.add("IncompleteSignature");
        VARIANTS.add("IncompleteSignatureException");
        VARIANTS.add("InternalFailure");
        VARIANTS.add("InternalError");
        VARIANTS.add("InternalFailureException");
        VARIANTS.add("InvalidAction");
        VARIANTS.add("InvalidActionException");
        VARIANTS.add("InvalidClientTokenId");
        VARIANTS.add("InvalidClientTokenIdException");
        VARIANTS.add("InvalidParameterCombination");
        VARIANTS.add("InvalidParameterCombinationException");
        VARIANTS.add("InvalidParameterValue");
        VARIANTS.add("InvalidParameterValueException");
        VARIANTS.add("InvalidQueryParameter");
        VARIANTS.add("InvalidQueryParameterException");
        VARIANTS.add("MalformedQueryString");
        VARIANTS.add("MalformedQueryStringException");
        VARIANTS.add("MissingAction");
        VARIANTS.add("MissingActionException");
        VARIANTS.add("MissingAuthenticationToken");
        VARIANTS.add("MissingAuthenticationTokenException");
        VARIANTS.add("MissingParameter");
        VARIANTS.add("MissingParameterException");
        VARIANTS.add("OptInRequired");
        VARIANTS.add("OptInRequiredException");
        VARIANTS.add("RequestExpired");
        VARIANTS.add("RequestExpiredException");
        VARIANTS.add("ServiceUnavailable");
        VARIANTS.add("ServiceUnavailableException");
        VARIANTS.add("ServiceUnavailableError");
        VARIANTS.add("Throttling");
        VARIANTS.add("ThrottlingException");
        VARIANTS.add("ThrottledException");
        VARIANTS.add("RequestThrottledException");
        VARIANTS.add("RequestThrottled");
        VARIANTS.add("ValidationError");
        VARIANTS.add("ValidationErrorException");
        VARIANTS.add("ValidationException");
        VARIANTS.add("AccessDenied");
        VARIANTS.add("AccessDeniedException");
        VARIANTS.add("ResourceNotFound");
        VARIANTS.add("ResourceNotFoundException");
        VARIANTS.add("UnrecognizedClient");
        VARIANTS.add("UnrecognizedClientException");
        VARIANTS.add("InternalServerError");
        VARIANTS.add("SlowDown");
        VARIANTS.add("SlowDownException");
        VARIANTS.add("RequestTimeTooSkewed");
        VARIANTS.add("RequestTimeTooSkewedException");
        VARIANTS.add("InvalidSignature");
        VARIANTS.add("InvalidSignatureException");
        VARIANTS.add("SignatureDoesNotMatch");
        VARIANTS.add("SignatureDoesNotMatchException");
        VARIANTS.add("InvalidAccessKeyId");
        VARIANTS.add("InvalidAccessKeyIdException");
        VARIANTS.add("RequestTimeout");
        VARIANTS.add("RequestTimeoutException");
    }

}
