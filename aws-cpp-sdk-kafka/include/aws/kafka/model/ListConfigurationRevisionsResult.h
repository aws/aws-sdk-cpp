/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/ConfigurationRevision.h>
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
namespace Kafka
{
namespace Model
{
  class ListConfigurationRevisionsResult
  {
  public:
    AWS_KAFKA_API ListConfigurationRevisionsResult();
    AWS_KAFKA_API ListConfigurationRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListConfigurationRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline ListConfigurationRevisionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline ListConfigurationRevisionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * 
            <p>Paginated results marker.</p>
         
     */
    inline ListConfigurationRevisionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * 
            <p>List of ConfigurationRevision objects.</p>
         
     */
    inline const Aws::Vector<ConfigurationRevision>& GetRevisions() const{ return m_revisions; }

    /**
     * 
            <p>List of ConfigurationRevision objects.</p>
         
     */
    inline void SetRevisions(const Aws::Vector<ConfigurationRevision>& value) { m_revisions = value; }

    /**
     * 
            <p>List of ConfigurationRevision objects.</p>
         
     */
    inline void SetRevisions(Aws::Vector<ConfigurationRevision>&& value) { m_revisions = std::move(value); }

    /**
     * 
            <p>List of ConfigurationRevision objects.</p>
         
     */
    inline ListConfigurationRevisionsResult& WithRevisions(const Aws::Vector<ConfigurationRevision>& value) { SetRevisions(value); return *this;}

    /**
     * 
            <p>List of ConfigurationRevision objects.</p>
         
     */
    inline ListConfigurationRevisionsResult& WithRevisions(Aws::Vector<ConfigurationRevision>&& value) { SetRevisions(std::move(value)); return *this;}

    /**
     * 
            <p>List of ConfigurationRevision objects.</p>
         
     */
    inline ListConfigurationRevisionsResult& AddRevisions(const ConfigurationRevision& value) { m_revisions.push_back(value); return *this; }

    /**
     * 
            <p>List of ConfigurationRevision objects.</p>
         
     */
    inline ListConfigurationRevisionsResult& AddRevisions(ConfigurationRevision&& value) { m_revisions.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ConfigurationRevision> m_revisions;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
