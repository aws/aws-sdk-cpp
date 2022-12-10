/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StudioComponent.h>
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
namespace NimbleStudio
{
namespace Model
{
  class ListStudioComponentsResult
  {
  public:
    AWS_NIMBLESTUDIO_API ListStudioComponentsResult();
    AWS_NIMBLESTUDIO_API ListStudioComponentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NIMBLESTUDIO_API ListStudioComponentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStudioComponentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStudioComponentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline ListStudioComponentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A collection of studio components.</p>
     */
    inline const Aws::Vector<StudioComponent>& GetStudioComponents() const{ return m_studioComponents; }

    /**
     * <p>A collection of studio components.</p>
     */
    inline void SetStudioComponents(const Aws::Vector<StudioComponent>& value) { m_studioComponents = value; }

    /**
     * <p>A collection of studio components.</p>
     */
    inline void SetStudioComponents(Aws::Vector<StudioComponent>&& value) { m_studioComponents = std::move(value); }

    /**
     * <p>A collection of studio components.</p>
     */
    inline ListStudioComponentsResult& WithStudioComponents(const Aws::Vector<StudioComponent>& value) { SetStudioComponents(value); return *this;}

    /**
     * <p>A collection of studio components.</p>
     */
    inline ListStudioComponentsResult& WithStudioComponents(Aws::Vector<StudioComponent>&& value) { SetStudioComponents(std::move(value)); return *this;}

    /**
     * <p>A collection of studio components.</p>
     */
    inline ListStudioComponentsResult& AddStudioComponents(const StudioComponent& value) { m_studioComponents.push_back(value); return *this; }

    /**
     * <p>A collection of studio components.</p>
     */
    inline ListStudioComponentsResult& AddStudioComponents(StudioComponent&& value) { m_studioComponents.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<StudioComponent> m_studioComponents;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
