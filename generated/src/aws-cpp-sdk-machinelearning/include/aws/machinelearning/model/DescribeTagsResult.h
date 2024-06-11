/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/machinelearning/model/TaggableResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/machinelearning/model/Tag.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/DescribeTagsOutput">AWS
   * API Reference</a></p>
   */
  class DescribeTagsResult
  {
  public:
    AWS_MACHINELEARNING_API DescribeTagsResult();
    AWS_MACHINELEARNING_API DescribeTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API DescribeTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the tagged ML object.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline DescribeTagsResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline DescribeTagsResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline DescribeTagsResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the tagged ML object.</p>
     */
    inline const TaggableResourceType& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const TaggableResourceType& value) { m_resourceType = value; }
    inline void SetResourceType(TaggableResourceType&& value) { m_resourceType = std::move(value); }
    inline DescribeTagsResult& WithResourceType(const TaggableResourceType& value) { SetResourceType(value); return *this;}
    inline DescribeTagsResult& WithResourceType(TaggableResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags associated with the ML object.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }
    inline DescribeTagsResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribeTagsResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribeTagsResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }
    inline DescribeTagsResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTagsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTagsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTagsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;

    TaggableResourceType m_resourceType;

    Aws::Vector<Tag> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
