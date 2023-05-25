/**
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
  class UpgradePublishedSchemaResult
  {
  public:
    AWS_CLOUDDIRECTORY_API UpgradePublishedSchemaResult();
    AWS_CLOUDDIRECTORY_API UpgradePublishedSchemaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API UpgradePublishedSchemaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline const Aws::String& GetUpgradedSchemaArn() const{ return m_upgradedSchemaArn; }

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline void SetUpgradedSchemaArn(const Aws::String& value) { m_upgradedSchemaArn = value; }

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline void SetUpgradedSchemaArn(Aws::String&& value) { m_upgradedSchemaArn = std::move(value); }

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline void SetUpgradedSchemaArn(const char* value) { m_upgradedSchemaArn.assign(value); }

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline UpgradePublishedSchemaResult& WithUpgradedSchemaArn(const Aws::String& value) { SetUpgradedSchemaArn(value); return *this;}

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline UpgradePublishedSchemaResult& WithUpgradedSchemaArn(Aws::String&& value) { SetUpgradedSchemaArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the upgraded schema that is returned as part of the response.</p>
     */
    inline UpgradePublishedSchemaResult& WithUpgradedSchemaArn(const char* value) { SetUpgradedSchemaArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpgradePublishedSchemaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpgradePublishedSchemaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpgradePublishedSchemaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_upgradedSchemaArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
