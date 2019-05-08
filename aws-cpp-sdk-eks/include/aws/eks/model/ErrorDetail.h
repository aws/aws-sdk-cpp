/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/eks/model/ErrorCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing an error when an asynchronous operation
   * fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ErrorDetail">AWS API
   * Reference</a></p>
   */
  class AWS_EKS_API ErrorDetail
  {
  public:
    ErrorDetail();
    ErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    ErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A brief description of the error. </p> <ul> <li> <p> <b>SubnetNotFound</b>:
     * We couldn't find one of the subnets associated with the cluster.</p> </li> <li>
     * <p> <b>SecurityGroupNotFound</b>: We couldn't find one of the security groups
     * associated with the cluster.</p> </li> <li> <p> <b>EniLimitReached</b>: You have
     * reached the elastic network interface limit for your account.</p> </li> <li> <p>
     * <b>IpNotAvailable</b>: A subnet associated with the cluster doesn't have any
     * free IP addresses.</p> </li> <li> <p> <b>AccessDenied</b>: You don't have
     * permissions to perform the specified operation.</p> </li> <li> <p>
     * <b>OperationNotPermitted</b>: The service role associated with the cluster
     * doesn't have the required access permissions for Amazon EKS.</p> </li> <li> <p>
     * <b>VpcIdNotFound</b>: We couldn't find the VPC associated with the cluster.</p>
     * </li> </ul>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>A brief description of the error. </p> <ul> <li> <p> <b>SubnetNotFound</b>:
     * We couldn't find one of the subnets associated with the cluster.</p> </li> <li>
     * <p> <b>SecurityGroupNotFound</b>: We couldn't find one of the security groups
     * associated with the cluster.</p> </li> <li> <p> <b>EniLimitReached</b>: You have
     * reached the elastic network interface limit for your account.</p> </li> <li> <p>
     * <b>IpNotAvailable</b>: A subnet associated with the cluster doesn't have any
     * free IP addresses.</p> </li> <li> <p> <b>AccessDenied</b>: You don't have
     * permissions to perform the specified operation.</p> </li> <li> <p>
     * <b>OperationNotPermitted</b>: The service role associated with the cluster
     * doesn't have the required access permissions for Amazon EKS.</p> </li> <li> <p>
     * <b>VpcIdNotFound</b>: We couldn't find the VPC associated with the cluster.</p>
     * </li> </ul>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>A brief description of the error. </p> <ul> <li> <p> <b>SubnetNotFound</b>:
     * We couldn't find one of the subnets associated with the cluster.</p> </li> <li>
     * <p> <b>SecurityGroupNotFound</b>: We couldn't find one of the security groups
     * associated with the cluster.</p> </li> <li> <p> <b>EniLimitReached</b>: You have
     * reached the elastic network interface limit for your account.</p> </li> <li> <p>
     * <b>IpNotAvailable</b>: A subnet associated with the cluster doesn't have any
     * free IP addresses.</p> </li> <li> <p> <b>AccessDenied</b>: You don't have
     * permissions to perform the specified operation.</p> </li> <li> <p>
     * <b>OperationNotPermitted</b>: The service role associated with the cluster
     * doesn't have the required access permissions for Amazon EKS.</p> </li> <li> <p>
     * <b>VpcIdNotFound</b>: We couldn't find the VPC associated with the cluster.</p>
     * </li> </ul>
     */
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>A brief description of the error. </p> <ul> <li> <p> <b>SubnetNotFound</b>:
     * We couldn't find one of the subnets associated with the cluster.</p> </li> <li>
     * <p> <b>SecurityGroupNotFound</b>: We couldn't find one of the security groups
     * associated with the cluster.</p> </li> <li> <p> <b>EniLimitReached</b>: You have
     * reached the elastic network interface limit for your account.</p> </li> <li> <p>
     * <b>IpNotAvailable</b>: A subnet associated with the cluster doesn't have any
     * free IP addresses.</p> </li> <li> <p> <b>AccessDenied</b>: You don't have
     * permissions to perform the specified operation.</p> </li> <li> <p>
     * <b>OperationNotPermitted</b>: The service role associated with the cluster
     * doesn't have the required access permissions for Amazon EKS.</p> </li> <li> <p>
     * <b>VpcIdNotFound</b>: We couldn't find the VPC associated with the cluster.</p>
     * </li> </ul>
     */
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>A brief description of the error. </p> <ul> <li> <p> <b>SubnetNotFound</b>:
     * We couldn't find one of the subnets associated with the cluster.</p> </li> <li>
     * <p> <b>SecurityGroupNotFound</b>: We couldn't find one of the security groups
     * associated with the cluster.</p> </li> <li> <p> <b>EniLimitReached</b>: You have
     * reached the elastic network interface limit for your account.</p> </li> <li> <p>
     * <b>IpNotAvailable</b>: A subnet associated with the cluster doesn't have any
     * free IP addresses.</p> </li> <li> <p> <b>AccessDenied</b>: You don't have
     * permissions to perform the specified operation.</p> </li> <li> <p>
     * <b>OperationNotPermitted</b>: The service role associated with the cluster
     * doesn't have the required access permissions for Amazon EKS.</p> </li> <li> <p>
     * <b>VpcIdNotFound</b>: We couldn't find the VPC associated with the cluster.</p>
     * </li> </ul>
     */
    inline ErrorDetail& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>A brief description of the error. </p> <ul> <li> <p> <b>SubnetNotFound</b>:
     * We couldn't find one of the subnets associated with the cluster.</p> </li> <li>
     * <p> <b>SecurityGroupNotFound</b>: We couldn't find one of the security groups
     * associated with the cluster.</p> </li> <li> <p> <b>EniLimitReached</b>: You have
     * reached the elastic network interface limit for your account.</p> </li> <li> <p>
     * <b>IpNotAvailable</b>: A subnet associated with the cluster doesn't have any
     * free IP addresses.</p> </li> <li> <p> <b>AccessDenied</b>: You don't have
     * permissions to perform the specified operation.</p> </li> <li> <p>
     * <b>OperationNotPermitted</b>: The service role associated with the cluster
     * doesn't have the required access permissions for Amazon EKS.</p> </li> <li> <p>
     * <b>VpcIdNotFound</b>: We couldn't find the VPC associated with the cluster.</p>
     * </li> </ul>
     */
    inline ErrorDetail& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>A more complete description of the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A more complete description of the error.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A more complete description of the error.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A more complete description of the error.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A more complete description of the error.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A more complete description of the error.</p>
     */
    inline ErrorDetail& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A more complete description of the error.</p>
     */
    inline ErrorDetail& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A more complete description of the error.</p>
     */
    inline ErrorDetail& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }

    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }

    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }

    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }

    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline ErrorDetail& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}

    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline ErrorDetail& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}

    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline ErrorDetail& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline ErrorDetail& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline ErrorDetail& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }

  private:

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
