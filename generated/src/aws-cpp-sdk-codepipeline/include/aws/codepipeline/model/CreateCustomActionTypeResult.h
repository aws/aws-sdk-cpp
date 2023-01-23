/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/Tag.h>
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
namespace CodePipeline
{
namespace Model
{
  /**
   * <p>Represents the output of a <code>CreateCustomActionType</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/CreateCustomActionTypeOutput">AWS
   * API Reference</a></p>
   */
  class CreateCustomActionTypeResult
  {
  public:
    AWS_CODEPIPELINE_API CreateCustomActionTypeResult();
    AWS_CODEPIPELINE_API CreateCustomActionTypeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API CreateCustomActionTypeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns information about the details of an action type.</p>
     */
    inline const ActionType& GetActionType() const{ return m_actionType; }

    /**
     * <p>Returns information about the details of an action type.</p>
     */
    inline void SetActionType(const ActionType& value) { m_actionType = value; }

    /**
     * <p>Returns information about the details of an action type.</p>
     */
    inline void SetActionType(ActionType&& value) { m_actionType = std::move(value); }

    /**
     * <p>Returns information about the details of an action type.</p>
     */
    inline CreateCustomActionTypeResult& WithActionType(const ActionType& value) { SetActionType(value); return *this;}

    /**
     * <p>Returns information about the details of an action type.</p>
     */
    inline CreateCustomActionTypeResult& WithActionType(ActionType&& value) { SetActionType(std::move(value)); return *this;}


    /**
     * <p>Specifies the tags applied to the custom action.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the tags applied to the custom action.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tags = value; }

    /**
     * <p>Specifies the tags applied to the custom action.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tags = std::move(value); }

    /**
     * <p>Specifies the tags applied to the custom action.</p>
     */
    inline CreateCustomActionTypeResult& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the tags applied to the custom action.</p>
     */
    inline CreateCustomActionTypeResult& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the tags applied to the custom action.</p>
     */
    inline CreateCustomActionTypeResult& AddTags(const Tag& value) { m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the tags applied to the custom action.</p>
     */
    inline CreateCustomActionTypeResult& AddTags(Tag&& value) { m_tags.push_back(std::move(value)); return *this; }

  private:

    ActionType m_actionType;

    Aws::Vector<Tag> m_tags;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
