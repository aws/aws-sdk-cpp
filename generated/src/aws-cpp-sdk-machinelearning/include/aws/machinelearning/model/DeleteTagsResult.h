﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/TaggableResourceType.h>
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
namespace MachineLearning
{
namespace Model
{
  /**
   * <p>Amazon ML returns the following elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DeleteTagsOutput">AWS
   * API Reference</a></p>
   */
  class DeleteTagsResult
  {
  public:
    AWS_MACHINELEARNING_API DeleteTagsResult();
    AWS_MACHINELEARNING_API DeleteTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API DeleteTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the ML object from which tags were deleted.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline DeleteTagsResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline DeleteTagsResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline DeleteTagsResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the ML object from which tags were deleted.</p>
     */
    inline const TaggableResourceType& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const TaggableResourceType& value) { m_resourceType = value; }
    inline void SetResourceType(TaggableResourceType&& value) { m_resourceType = std::move(value); }
    inline DeleteTagsResult& WithResourceType(const TaggableResourceType& value) { SetResourceType(value); return *this;}
    inline DeleteTagsResult& WithResourceType(TaggableResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DeleteTagsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DeleteTagsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DeleteTagsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;

    TaggableResourceType m_resourceType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
