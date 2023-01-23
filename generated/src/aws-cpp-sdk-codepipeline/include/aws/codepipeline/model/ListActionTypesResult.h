/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionType.h>
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
   * <p>Represents the output of a <code>ListActionTypes</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ListActionTypesOutput">AWS
   * API Reference</a></p>
   */
  class ListActionTypesResult
  {
  public:
    AWS_CODEPIPELINE_API ListActionTypesResult();
    AWS_CODEPIPELINE_API ListActionTypesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListActionTypesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides details of the action types.</p>
     */
    inline const Aws::Vector<ActionType>& GetActionTypes() const{ return m_actionTypes; }

    /**
     * <p>Provides details of the action types.</p>
     */
    inline void SetActionTypes(const Aws::Vector<ActionType>& value) { m_actionTypes = value; }

    /**
     * <p>Provides details of the action types.</p>
     */
    inline void SetActionTypes(Aws::Vector<ActionType>&& value) { m_actionTypes = std::move(value); }

    /**
     * <p>Provides details of the action types.</p>
     */
    inline ListActionTypesResult& WithActionTypes(const Aws::Vector<ActionType>& value) { SetActionTypes(value); return *this;}

    /**
     * <p>Provides details of the action types.</p>
     */
    inline ListActionTypesResult& WithActionTypes(Aws::Vector<ActionType>&& value) { SetActionTypes(std::move(value)); return *this;}

    /**
     * <p>Provides details of the action types.</p>
     */
    inline ListActionTypesResult& AddActionTypes(const ActionType& value) { m_actionTypes.push_back(value); return *this; }

    /**
     * <p>Provides details of the action types.</p>
     */
    inline ListActionTypesResult& AddActionTypes(ActionType&& value) { m_actionTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list action types call to
     * return the next set of action types in the list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list action types call to
     * return the next set of action types in the list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list action types call to
     * return the next set of action types in the list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list action types call to
     * return the next set of action types in the list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list action types call to
     * return the next set of action types in the list.</p>
     */
    inline ListActionTypesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list action types call to
     * return the next set of action types in the list.</p>
     */
    inline ListActionTypesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned. It can be used in a subsequent list action types call to
     * return the next set of action types in the list.</p>
     */
    inline ListActionTypesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ActionType> m_actionTypes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
