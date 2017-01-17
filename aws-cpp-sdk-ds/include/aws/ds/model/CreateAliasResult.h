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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Contains the results of the <a>CreateAlias</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateAliasResult">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API CreateAliasResult
  {
  public:
    CreateAliasResult();
    CreateAliasResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateAliasResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The identifier of the directory.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = value; }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory.</p>
     */
    inline CreateAliasResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline CreateAliasResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory.</p>
     */
    inline CreateAliasResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The alias for the directory.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias for the directory.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_alias = value; }

    /**
     * <p>The alias for the directory.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_alias = value; }

    /**
     * <p>The alias for the directory.</p>
     */
    inline void SetAlias(const char* value) { m_alias.assign(value); }

    /**
     * <p>The alias for the directory.</p>
     */
    inline CreateAliasResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias for the directory.</p>
     */
    inline CreateAliasResult& WithAlias(Aws::String&& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias for the directory.</p>
     */
    inline CreateAliasResult& WithAlias(const char* value) { SetAlias(value); return *this;}

  private:
    Aws::String m_directoryId;
    Aws::String m_alias;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
