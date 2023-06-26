/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/LFTagError.h>
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
  class RemoveLFTagsFromResourceResult
  {
  public:
    AWS_LAKEFORMATION_API RemoveLFTagsFromResourceResult();
    AWS_LAKEFORMATION_API RemoveLFTagsFromResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API RemoveLFTagsFromResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of failures to untag a resource.</p>
     */
    inline const Aws::Vector<LFTagError>& GetFailures() const{ return m_failures; }

    /**
     * <p>A list of failures to untag a resource.</p>
     */
    inline void SetFailures(const Aws::Vector<LFTagError>& value) { m_failures = value; }

    /**
     * <p>A list of failures to untag a resource.</p>
     */
    inline void SetFailures(Aws::Vector<LFTagError>&& value) { m_failures = std::move(value); }

    /**
     * <p>A list of failures to untag a resource.</p>
     */
    inline RemoveLFTagsFromResourceResult& WithFailures(const Aws::Vector<LFTagError>& value) { SetFailures(value); return *this;}

    /**
     * <p>A list of failures to untag a resource.</p>
     */
    inline RemoveLFTagsFromResourceResult& WithFailures(Aws::Vector<LFTagError>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>A list of failures to untag a resource.</p>
     */
    inline RemoveLFTagsFromResourceResult& AddFailures(const LFTagError& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>A list of failures to untag a resource.</p>
     */
    inline RemoveLFTagsFromResourceResult& AddFailures(LFTagError&& value) { m_failures.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RemoveLFTagsFromResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RemoveLFTagsFromResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RemoveLFTagsFromResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<LFTagError> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
