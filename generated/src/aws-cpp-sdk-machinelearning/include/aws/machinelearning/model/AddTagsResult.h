/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/machinelearning-2014-12-12/AddTagsOutput">AWS
   * API Reference</a></p>
   */
  class AddTagsResult
  {
  public:
    AWS_MACHINELEARNING_API AddTagsResult();
    AWS_MACHINELEARNING_API AddTagsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACHINELEARNING_API AddTagsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline const TaggableResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline void SetResourceType(const TaggableResourceType& value) { m_resourceType = value; }

    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline void SetResourceType(TaggableResourceType&& value) { m_resourceType = std::move(value); }

    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceType(const TaggableResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the ML object that was tagged.</p>
     */
    inline AddTagsResult& WithResourceType(TaggableResourceType&& value) { SetResourceType(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;

    TaggableResourceType m_resourceType;
  };

} // namespace Model
} // namespace MachineLearning
} // namespace Aws
