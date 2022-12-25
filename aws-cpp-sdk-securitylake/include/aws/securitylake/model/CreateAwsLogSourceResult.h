/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace SecurityLake
{
namespace Model
{
  class CreateAwsLogSourceResult
  {
  public:
    AWS_SECURITYLAKE_API CreateAwsLogSourceResult();
    AWS_SECURITYLAKE_API CreateAwsLogSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYLAKE_API CreateAwsLogSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of all accounts in which enabling a natively-supported Amazon Web
     * Services service as a Security Lake failed. The failure occurred as these
     * accounts are not part of an organization.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailed() const{ return m_failed; }

    /**
     * <p>List of all accounts in which enabling a natively-supported Amazon Web
     * Services service as a Security Lake failed. The failure occurred as these
     * accounts are not part of an organization.</p>
     */
    inline void SetFailed(const Aws::Vector<Aws::String>& value) { m_failed = value; }

    /**
     * <p>List of all accounts in which enabling a natively-supported Amazon Web
     * Services service as a Security Lake failed. The failure occurred as these
     * accounts are not part of an organization.</p>
     */
    inline void SetFailed(Aws::Vector<Aws::String>&& value) { m_failed = std::move(value); }

    /**
     * <p>List of all accounts in which enabling a natively-supported Amazon Web
     * Services service as a Security Lake failed. The failure occurred as these
     * accounts are not part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& WithFailed(const Aws::Vector<Aws::String>& value) { SetFailed(value); return *this;}

    /**
     * <p>List of all accounts in which enabling a natively-supported Amazon Web
     * Services service as a Security Lake failed. The failure occurred as these
     * accounts are not part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& WithFailed(Aws::Vector<Aws::String>&& value) { SetFailed(std::move(value)); return *this;}

    /**
     * <p>List of all accounts in which enabling a natively-supported Amazon Web
     * Services service as a Security Lake failed. The failure occurred as these
     * accounts are not part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& AddFailed(const Aws::String& value) { m_failed.push_back(value); return *this; }

    /**
     * <p>List of all accounts in which enabling a natively-supported Amazon Web
     * Services service as a Security Lake failed. The failure occurred as these
     * accounts are not part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& AddFailed(Aws::String&& value) { m_failed.push_back(std::move(value)); return *this; }

    /**
     * <p>List of all accounts in which enabling a natively-supported Amazon Web
     * Services service as a Security Lake failed. The failure occurred as these
     * accounts are not part of an organization.</p>
     */
    inline CreateAwsLogSourceResult& AddFailed(const char* value) { m_failed.push_back(value); return *this; }


    /**
     * <p>List of all accounts which are in the process of enabling a
     * natively-supported Amazon Web Services service as a Security Lake.</p>
     */
    inline const Aws::Vector<Aws::String>& GetProcessing() const{ return m_processing; }

    /**
     * <p>List of all accounts which are in the process of enabling a
     * natively-supported Amazon Web Services service as a Security Lake.</p>
     */
    inline void SetProcessing(const Aws::Vector<Aws::String>& value) { m_processing = value; }

    /**
     * <p>List of all accounts which are in the process of enabling a
     * natively-supported Amazon Web Services service as a Security Lake.</p>
     */
    inline void SetProcessing(Aws::Vector<Aws::String>&& value) { m_processing = std::move(value); }

    /**
     * <p>List of all accounts which are in the process of enabling a
     * natively-supported Amazon Web Services service as a Security Lake.</p>
     */
    inline CreateAwsLogSourceResult& WithProcessing(const Aws::Vector<Aws::String>& value) { SetProcessing(value); return *this;}

    /**
     * <p>List of all accounts which are in the process of enabling a
     * natively-supported Amazon Web Services service as a Security Lake.</p>
     */
    inline CreateAwsLogSourceResult& WithProcessing(Aws::Vector<Aws::String>&& value) { SetProcessing(std::move(value)); return *this;}

    /**
     * <p>List of all accounts which are in the process of enabling a
     * natively-supported Amazon Web Services service as a Security Lake.</p>
     */
    inline CreateAwsLogSourceResult& AddProcessing(const Aws::String& value) { m_processing.push_back(value); return *this; }

    /**
     * <p>List of all accounts which are in the process of enabling a
     * natively-supported Amazon Web Services service as a Security Lake.</p>
     */
    inline CreateAwsLogSourceResult& AddProcessing(Aws::String&& value) { m_processing.push_back(std::move(value)); return *this; }

    /**
     * <p>List of all accounts which are in the process of enabling a
     * natively-supported Amazon Web Services service as a Security Lake.</p>
     */
    inline CreateAwsLogSourceResult& AddProcessing(const char* value) { m_processing.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_failed;

    Aws::Vector<Aws::String> m_processing;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
