/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/TemporaryCredential.h>

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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>GrantAccess</code> request.</p>
   */
  class AWS_OPSWORKS_API GrantAccessResult
  {
  public:
    GrantAccessResult();
    GrantAccessResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GrantAccessResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A <code>TemporaryCredential</code> object that contains the data needed to
     * log in to the instance by RDP clients, such as the Microsoft Remote Desktop
     * Connection.</p>
     */
    inline const TemporaryCredential& GetTemporaryCredential() const{ return m_temporaryCredential; }

    /**
     * <p>A <code>TemporaryCredential</code> object that contains the data needed to
     * log in to the instance by RDP clients, such as the Microsoft Remote Desktop
     * Connection.</p>
     */
    inline void SetTemporaryCredential(const TemporaryCredential& value) { m_temporaryCredential = value; }

    /**
     * <p>A <code>TemporaryCredential</code> object that contains the data needed to
     * log in to the instance by RDP clients, such as the Microsoft Remote Desktop
     * Connection.</p>
     */
    inline void SetTemporaryCredential(TemporaryCredential&& value) { m_temporaryCredential = value; }

    /**
     * <p>A <code>TemporaryCredential</code> object that contains the data needed to
     * log in to the instance by RDP clients, such as the Microsoft Remote Desktop
     * Connection.</p>
     */
    inline GrantAccessResult& WithTemporaryCredential(const TemporaryCredential& value) { SetTemporaryCredential(value); return *this;}

    /**
     * <p>A <code>TemporaryCredential</code> object that contains the data needed to
     * log in to the instance by RDP clients, such as the Microsoft Remote Desktop
     * Connection.</p>
     */
    inline GrantAccessResult& WithTemporaryCredential(TemporaryCredential&& value) { SetTemporaryCredential(value); return *this;}

  private:
    TemporaryCredential m_temporaryCredential;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
