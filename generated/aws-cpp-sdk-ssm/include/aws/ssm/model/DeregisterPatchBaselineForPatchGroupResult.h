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
  class AWS_SSM_API DeregisterPatchBaselineForPatchGroupResult
  {
  public:
    DeregisterPatchBaselineForPatchGroupResult();
    DeregisterPatchBaselineForPatchGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeregisterPatchBaselineForPatchGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the patch baseline the patch group was deregistered from.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the patch baseline the patch group was deregistered from.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineId = value; }

    /**
     * <p>The ID of the patch baseline the patch group was deregistered from.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineId = std::move(value); }

    /**
     * <p>The ID of the patch baseline the patch group was deregistered from.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineId.assign(value); }

    /**
     * <p>The ID of the patch baseline the patch group was deregistered from.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupResult& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the patch baseline the patch group was deregistered from.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupResult& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the patch baseline the patch group was deregistered from.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupResult& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}


    /**
     * <p>The name of the patch group deregistered from the patch baseline.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group deregistered from the patch baseline.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroup = value; }

    /**
     * <p>The name of the patch group deregistered from the patch baseline.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroup = std::move(value); }

    /**
     * <p>The name of the patch group deregistered from the patch baseline.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroup.assign(value); }

    /**
     * <p>The name of the patch group deregistered from the patch baseline.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupResult& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group deregistered from the patch baseline.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupResult& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the patch group deregistered from the patch baseline.</p>
     */
    inline DeregisterPatchBaselineForPatchGroupResult& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}

  private:

    Aws::String m_baselineId;

    Aws::String m_patchGroup;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
