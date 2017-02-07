﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/Directory.h>

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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API ListDirectoriesResult
  {
  public:
    ListDirectoriesResult();
    ListDirectoriesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDirectoriesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Lists all directories associated with your account in pagination fashion.</p>
     */
    inline const Aws::Vector<Directory>& GetDirectories() const{ return m_directories; }

    /**
     * <p>Lists all directories associated with your account in pagination fashion.</p>
     */
    inline void SetDirectories(const Aws::Vector<Directory>& value) { m_directories = value; }

    /**
     * <p>Lists all directories associated with your account in pagination fashion.</p>
     */
    inline void SetDirectories(Aws::Vector<Directory>&& value) { m_directories = value; }

    /**
     * <p>Lists all directories associated with your account in pagination fashion.</p>
     */
    inline ListDirectoriesResult& WithDirectories(const Aws::Vector<Directory>& value) { SetDirectories(value); return *this;}

    /**
     * <p>Lists all directories associated with your account in pagination fashion.</p>
     */
    inline ListDirectoriesResult& WithDirectories(Aws::Vector<Directory>&& value) { SetDirectories(value); return *this;}

    /**
     * <p>Lists all directories associated with your account in pagination fashion.</p>
     */
    inline ListDirectoriesResult& AddDirectories(const Directory& value) { m_directories.push_back(value); return *this; }

    /**
     * <p>Lists all directories associated with your account in pagination fashion.</p>
     */
    inline ListDirectoriesResult& AddDirectories(Directory&& value) { m_directories.push_back(value); return *this; }

    /**
     * <p>The pagination token.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>The pagination token.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token.</p>
     */
    inline ListDirectoriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListDirectoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token.</p>
     */
    inline ListDirectoriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Directory> m_directories;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
