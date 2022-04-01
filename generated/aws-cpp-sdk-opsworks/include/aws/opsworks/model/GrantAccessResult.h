﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/TemporaryCredential.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>GrantAccess</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/GrantAccessResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API GrantAccessResult
  {
  public:
    GrantAccessResult();
    GrantAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GrantAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline void SetTemporaryCredential(TemporaryCredential&& value) { m_temporaryCredential = std::move(value); }

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
    inline GrantAccessResult& WithTemporaryCredential(TemporaryCredential&& value) { SetTemporaryCredential(std::move(value)); return *this;}

  private:

    TemporaryCredential m_temporaryCredential;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
