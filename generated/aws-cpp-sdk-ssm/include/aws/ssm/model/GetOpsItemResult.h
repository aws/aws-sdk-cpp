﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/OpsItem.h>
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
  class AWS_SSM_API GetOpsItemResult
  {
  public:
    GetOpsItemResult();
    GetOpsItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetOpsItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The OpsItem.</p>
     */
    inline const OpsItem& GetOpsItem() const{ return m_opsItem; }

    /**
     * <p>The OpsItem.</p>
     */
    inline void SetOpsItem(const OpsItem& value) { m_opsItem = value; }

    /**
     * <p>The OpsItem.</p>
     */
    inline void SetOpsItem(OpsItem&& value) { m_opsItem = std::move(value); }

    /**
     * <p>The OpsItem.</p>
     */
    inline GetOpsItemResult& WithOpsItem(const OpsItem& value) { SetOpsItem(value); return *this;}

    /**
     * <p>The OpsItem.</p>
     */
    inline GetOpsItemResult& WithOpsItem(OpsItem&& value) { SetOpsItem(std::move(value)); return *this;}

  private:

    OpsItem m_opsItem;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
