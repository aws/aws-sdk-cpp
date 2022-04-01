﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/Directory.h>
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
namespace CloudDirectory
{
namespace Model
{
  class AWS_CLOUDDIRECTORY_API ListDirectoriesResult
  {
  public:
    ListDirectoriesResult();
    ListDirectoriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListDirectoriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Lists all directories that are associated with your account in pagination
     * fashion.</p>
     */
    inline const Aws::Vector<Directory>& GetDirectories() const{ return m_directories; }

    /**
     * <p>Lists all directories that are associated with your account in pagination
     * fashion.</p>
     */
    inline void SetDirectories(const Aws::Vector<Directory>& value) { m_directories = value; }

    /**
     * <p>Lists all directories that are associated with your account in pagination
     * fashion.</p>
     */
    inline void SetDirectories(Aws::Vector<Directory>&& value) { m_directories = std::move(value); }

    /**
     * <p>Lists all directories that are associated with your account in pagination
     * fashion.</p>
     */
    inline ListDirectoriesResult& WithDirectories(const Aws::Vector<Directory>& value) { SetDirectories(value); return *this;}

    /**
     * <p>Lists all directories that are associated with your account in pagination
     * fashion.</p>
     */
    inline ListDirectoriesResult& WithDirectories(Aws::Vector<Directory>&& value) { SetDirectories(std::move(value)); return *this;}

    /**
     * <p>Lists all directories that are associated with your account in pagination
     * fashion.</p>
     */
    inline ListDirectoriesResult& AddDirectories(const Directory& value) { m_directories.push_back(value); return *this; }

    /**
     * <p>Lists all directories that are associated with your account in pagination
     * fashion.</p>
     */
    inline ListDirectoriesResult& AddDirectories(Directory&& value) { m_directories.push_back(std::move(value)); return *this; }


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
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

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
    inline ListDirectoriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

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
