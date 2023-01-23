/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ManagedJobTemplateSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListManagedJobTemplatesResult
  {
  public:
    AWS_IOT_API ListManagedJobTemplatesResult();
    AWS_IOT_API ListManagedJobTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListManagedJobTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of managed job templates that are returned.</p>
     */
    inline const Aws::Vector<ManagedJobTemplateSummary>& GetManagedJobTemplates() const{ return m_managedJobTemplates; }

    /**
     * <p>A list of managed job templates that are returned.</p>
     */
    inline void SetManagedJobTemplates(const Aws::Vector<ManagedJobTemplateSummary>& value) { m_managedJobTemplates = value; }

    /**
     * <p>A list of managed job templates that are returned.</p>
     */
    inline void SetManagedJobTemplates(Aws::Vector<ManagedJobTemplateSummary>&& value) { m_managedJobTemplates = std::move(value); }

    /**
     * <p>A list of managed job templates that are returned.</p>
     */
    inline ListManagedJobTemplatesResult& WithManagedJobTemplates(const Aws::Vector<ManagedJobTemplateSummary>& value) { SetManagedJobTemplates(value); return *this;}

    /**
     * <p>A list of managed job templates that are returned.</p>
     */
    inline ListManagedJobTemplatesResult& WithManagedJobTemplates(Aws::Vector<ManagedJobTemplateSummary>&& value) { SetManagedJobTemplates(std::move(value)); return *this;}

    /**
     * <p>A list of managed job templates that are returned.</p>
     */
    inline ListManagedJobTemplatesResult& AddManagedJobTemplates(const ManagedJobTemplateSummary& value) { m_managedJobTemplates.push_back(value); return *this; }

    /**
     * <p>A list of managed job templates that are returned.</p>
     */
    inline ListManagedJobTemplatesResult& AddManagedJobTemplates(ManagedJobTemplateSummary&& value) { m_managedJobTemplates.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListManagedJobTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListManagedJobTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results.</p>
     */
    inline ListManagedJobTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ManagedJobTemplateSummary> m_managedJobTemplates;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
