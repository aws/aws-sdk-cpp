﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkLink
{
namespace Model
{
  class AWS_WORKLINK_API DescribeDevicePolicyConfigurationResult
  {
  public:
    DescribeDevicePolicyConfigurationResult();
    DescribeDevicePolicyConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeDevicePolicyConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The certificate chain, including intermediate certificates and the root
     * certificate authority certificate used to issue device certificates.</p>
     */
    inline const Aws::String& GetDeviceCaCertificate() const{ return m_deviceCaCertificate; }

    /**
     * <p>The certificate chain, including intermediate certificates and the root
     * certificate authority certificate used to issue device certificates.</p>
     */
    inline void SetDeviceCaCertificate(const Aws::String& value) { m_deviceCaCertificate = value; }

    /**
     * <p>The certificate chain, including intermediate certificates and the root
     * certificate authority certificate used to issue device certificates.</p>
     */
    inline void SetDeviceCaCertificate(Aws::String&& value) { m_deviceCaCertificate = std::move(value); }

    /**
     * <p>The certificate chain, including intermediate certificates and the root
     * certificate authority certificate used to issue device certificates.</p>
     */
    inline void SetDeviceCaCertificate(const char* value) { m_deviceCaCertificate.assign(value); }

    /**
     * <p>The certificate chain, including intermediate certificates and the root
     * certificate authority certificate used to issue device certificates.</p>
     */
    inline DescribeDevicePolicyConfigurationResult& WithDeviceCaCertificate(const Aws::String& value) { SetDeviceCaCertificate(value); return *this;}

    /**
     * <p>The certificate chain, including intermediate certificates and the root
     * certificate authority certificate used to issue device certificates.</p>
     */
    inline DescribeDevicePolicyConfigurationResult& WithDeviceCaCertificate(Aws::String&& value) { SetDeviceCaCertificate(std::move(value)); return *this;}

    /**
     * <p>The certificate chain, including intermediate certificates and the root
     * certificate authority certificate used to issue device certificates.</p>
     */
    inline DescribeDevicePolicyConfigurationResult& WithDeviceCaCertificate(const char* value) { SetDeviceCaCertificate(value); return *this;}

  private:

    Aws::String m_deviceCaCertificate;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
