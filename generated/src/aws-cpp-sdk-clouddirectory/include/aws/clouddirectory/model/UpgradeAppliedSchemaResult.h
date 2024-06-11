﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
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
namespace CloudDirectory
{
namespace Model
{
  class UpgradeAppliedSchemaResult
  {
  public:
    AWS_CLOUDDIRECTORY_API UpgradeAppliedSchemaResult();
    AWS_CLOUDDIRECTORY_API UpgradeAppliedSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API UpgradeAppliedSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline const Aws::String& GetUpgradedSchemaArn() const{ return m_upgradedSchemaArn; }
    inline void SetUpgradedSchemaArn(const Aws::String& value) { m_upgradedSchemaArn = value; }
    inline void SetUpgradedSchemaArn(Aws::String&& value) { m_upgradedSchemaArn = std::move(value); }
    inline void SetUpgradedSchemaArn(const char* value) { m_upgradedSchemaArn.assign(value); }
    inline UpgradeAppliedSchemaResult& WithUpgradedSchemaArn(const Aws::String& value) { SetUpgradedSchemaArn(value); return *this;}
    inline UpgradeAppliedSchemaResult& WithUpgradedSchemaArn(Aws::String&& value) { SetUpgradedSchemaArn(std::move(value)); return *this;}
    inline UpgradeAppliedSchemaResult& WithUpgradedSchemaArn(const char* value) { SetUpgradedSchemaArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the directory that is returned as part of the response.</p>
     */
    inline const Aws::String& GetDirectoryArn() const{ return m_directoryArn; }
    inline void SetDirectoryArn(const Aws::String& value) { m_directoryArn = value; }
    inline void SetDirectoryArn(Aws::String&& value) { m_directoryArn = std::move(value); }
    inline void SetDirectoryArn(const char* value) { m_directoryArn.assign(value); }
    inline UpgradeAppliedSchemaResult& WithDirectoryArn(const Aws::String& value) { SetDirectoryArn(value); return *this;}
    inline UpgradeAppliedSchemaResult& WithDirectoryArn(Aws::String&& value) { SetDirectoryArn(std::move(value)); return *this;}
    inline UpgradeAppliedSchemaResult& WithDirectoryArn(const char* value) { SetDirectoryArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpgradeAppliedSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpgradeAppliedSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpgradeAppliedSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_upgradedSchemaArn;

    Aws::String m_directoryArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
