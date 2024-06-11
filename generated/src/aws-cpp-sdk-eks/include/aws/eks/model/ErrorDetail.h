﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ErrorDetail
  {
  public:
    AWS_EKS_API ErrorDetail();
    AWS_EKS_API ErrorDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API ErrorDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A brief description of the error. </p> <ul> <li> <p> <b>SubnetNotFound</b>:
     * We couldn't find one of the subnets associated with the cluster.</p> </li> <li>
     * <p> <b>SecurityGroupNotFound</b>: We couldn't find one of the security groups
     * associated with the cluster.</p> </li> <li> <p> <b>EniLimitReached</b>: You have
     * reached the elastic network interface limit for your account.</p> </li> <li> <p>
     * <b>IpNotAvailable</b>: A subnet associated with the cluster doesn't have any
     * available IP addresses.</p> </li> <li> <p> <b>AccessDenied</b>: You don't have
     * permissions to perform the specified operation.</p> </li> <li> <p>
     * <b>OperationNotPermitted</b>: The service role associated with the cluster
     * doesn't have the required access permissions for Amazon EKS.</p> </li> <li> <p>
     * <b>VpcIdNotFound</b>: We couldn't find the VPC associated with the cluster.</p>
     * </li> </ul>
     */
    inline const ErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const ErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(ErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline ErrorDetail& WithErrorCode(const ErrorCode& value) { SetErrorCode(value); return *this;}
    inline ErrorDetail& WithErrorCode(ErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A more complete description of the error.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline ErrorDetail& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline ErrorDetail& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline ErrorDetail& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional field that contains the resource IDs associated with the
     * error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceIds() const{ return m_resourceIds; }
    inline bool ResourceIdsHasBeenSet() const { return m_resourceIdsHasBeenSet; }
    inline void SetResourceIds(const Aws::Vector<Aws::String>& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = value; }
    inline void SetResourceIds(Aws::Vector<Aws::String>&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds = std::move(value); }
    inline ErrorDetail& WithResourceIds(const Aws::Vector<Aws::String>& value) { SetResourceIds(value); return *this;}
    inline ErrorDetail& WithResourceIds(Aws::Vector<Aws::String>&& value) { SetResourceIds(std::move(value)); return *this;}
    inline ErrorDetail& AddResourceIds(const Aws::String& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    inline ErrorDetail& AddResourceIds(Aws::String&& value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(std::move(value)); return *this; }
    inline ErrorDetail& AddResourceIds(const char* value) { m_resourceIdsHasBeenSet = true; m_resourceIds.push_back(value); return *this; }
    ///@}
  private:

    ErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceIds;
    bool m_resourceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
