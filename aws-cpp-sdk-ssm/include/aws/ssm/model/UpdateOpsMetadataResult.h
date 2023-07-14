﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API UpdateOpsMetadataResult
  {
  public:
    UpdateOpsMetadataResult();
    UpdateOpsMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateOpsMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object that was
     * updated.</p>
     */
    inline const Aws::String& GetOpsMetadataArn() const{ return m_opsMetadataArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object that was
     * updated.</p>
     */
    inline void SetOpsMetadataArn(const Aws::String& value) { m_opsMetadataArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object that was
     * updated.</p>
     */
    inline void SetOpsMetadataArn(Aws::String&& value) { m_opsMetadataArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object that was
     * updated.</p>
     */
    inline void SetOpsMetadataArn(const char* value) { m_opsMetadataArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object that was
     * updated.</p>
     */
    inline UpdateOpsMetadataResult& WithOpsMetadataArn(const Aws::String& value) { SetOpsMetadataArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object that was
     * updated.</p>
     */
    inline UpdateOpsMetadataResult& WithOpsMetadataArn(Aws::String&& value) { SetOpsMetadataArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the OpsMetadata Object that was
     * updated.</p>
     */
    inline UpdateOpsMetadataResult& WithOpsMetadataArn(const char* value) { SetOpsMetadataArn(value); return *this;}

  private:

    Aws::String m_opsMetadataArn;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
