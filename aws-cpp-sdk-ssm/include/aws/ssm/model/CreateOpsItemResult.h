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
  class AWS_SSM_API CreateOpsItemResult
  {
  public:
    CreateOpsItemResult();
    CreateOpsItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateOpsItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline const Aws::String& GetOpsItemId() const{ return m_opsItemId; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const Aws::String& value) { m_opsItemId = value; }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(Aws::String&& value) { m_opsItemId = std::move(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline void SetOpsItemId(const char* value) { m_opsItemId.assign(value); }

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline CreateOpsItemResult& WithOpsItemId(const Aws::String& value) { SetOpsItemId(value); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline CreateOpsItemResult& WithOpsItemId(Aws::String&& value) { SetOpsItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the OpsItem.</p>
     */
    inline CreateOpsItemResult& WithOpsItemId(const char* value) { SetOpsItemId(value); return *this;}

  private:

    Aws::String m_opsItemId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
