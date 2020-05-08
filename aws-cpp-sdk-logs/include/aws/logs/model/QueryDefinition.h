/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchLogs
{
namespace Model
{

  class AWS_CLOUDWATCHLOGS_API QueryDefinition
  {
  public:
    QueryDefinition();
    QueryDefinition(Aws::Utils::Json::JsonView jsonValue);
    QueryDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetQueryDefinitionId() const{ return m_queryDefinitionId; }

    
    inline bool QueryDefinitionIdHasBeenSet() const { return m_queryDefinitionIdHasBeenSet; }

    
    inline void SetQueryDefinitionId(const Aws::String& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = value; }

    
    inline void SetQueryDefinitionId(Aws::String&& value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId = std::move(value); }

    
    inline void SetQueryDefinitionId(const char* value) { m_queryDefinitionIdHasBeenSet = true; m_queryDefinitionId.assign(value); }

    
    inline QueryDefinition& WithQueryDefinitionId(const Aws::String& value) { SetQueryDefinitionId(value); return *this;}

    
    inline QueryDefinition& WithQueryDefinitionId(Aws::String&& value) { SetQueryDefinitionId(std::move(value)); return *this;}

    
    inline QueryDefinition& WithQueryDefinitionId(const char* value) { SetQueryDefinitionId(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline QueryDefinition& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline QueryDefinition& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline QueryDefinition& WithName(const char* value) { SetName(value); return *this;}


    
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    
    inline QueryDefinition& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    
    inline QueryDefinition& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    
    inline QueryDefinition& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    
    inline long long GetLastModified() const{ return m_lastModified; }

    
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    
    inline void SetLastModified(long long value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    
    inline QueryDefinition& WithLastModified(long long value) { SetLastModified(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetLogGroupNames() const{ return m_logGroupNames; }

    
    inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }

    
    inline void SetLogGroupNames(const Aws::Vector<Aws::String>& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = value; }

    
    inline void SetLogGroupNames(Aws::Vector<Aws::String>&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames = std::move(value); }

    
    inline QueryDefinition& WithLogGroupNames(const Aws::Vector<Aws::String>& value) { SetLogGroupNames(value); return *this;}

    
    inline QueryDefinition& WithLogGroupNames(Aws::Vector<Aws::String>&& value) { SetLogGroupNames(std::move(value)); return *this;}

    
    inline QueryDefinition& AddLogGroupNames(const Aws::String& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }

    
    inline QueryDefinition& AddLogGroupNames(Aws::String&& value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(std::move(value)); return *this; }

    
    inline QueryDefinition& AddLogGroupNames(const char* value) { m_logGroupNamesHasBeenSet = true; m_logGroupNames.push_back(value); return *this; }

  private:

    Aws::String m_queryDefinitionId;
    bool m_queryDefinitionIdHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet;

    long long m_lastModified;
    bool m_lastModifiedHasBeenSet;

    Aws::Vector<Aws::String> m_logGroupNames;
    bool m_logGroupNamesHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
