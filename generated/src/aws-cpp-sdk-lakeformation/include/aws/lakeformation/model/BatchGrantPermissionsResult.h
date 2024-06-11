﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/BatchPermissionsFailureEntry.h>
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
namespace LakeFormation
{
namespace Model
{
  class BatchGrantPermissionsResult
  {
  public:
    AWS_LAKEFORMATION_API BatchGrantPermissionsResult();
    AWS_LAKEFORMATION_API BatchGrantPermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API BatchGrantPermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of failures to grant permissions to the resources.</p>
     */
    inline const Aws::Vector<BatchPermissionsFailureEntry>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<BatchPermissionsFailureEntry>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<BatchPermissionsFailureEntry>&& value) { m_failures = std::move(value); }
    inline BatchGrantPermissionsResult& WithFailures(const Aws::Vector<BatchPermissionsFailureEntry>& value) { SetFailures(value); return *this;}
    inline BatchGrantPermissionsResult& WithFailures(Aws::Vector<BatchPermissionsFailureEntry>&& value) { SetFailures(std::move(value)); return *this;}
    inline BatchGrantPermissionsResult& AddFailures(const BatchPermissionsFailureEntry& value) { m_failures.push_back(value); return *this; }
    inline BatchGrantPermissionsResult& AddFailures(BatchPermissionsFailureEntry&& value) { m_failures.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchGrantPermissionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchGrantPermissionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchGrantPermissionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchPermissionsFailureEntry> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
