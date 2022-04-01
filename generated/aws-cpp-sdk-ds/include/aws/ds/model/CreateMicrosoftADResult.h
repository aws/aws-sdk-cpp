﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DirectoryService
{
namespace Model
{
  /**
   * <p>Result of a CreateMicrosoftAD request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateMicrosoftADResult">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API CreateMicrosoftADResult
  {
  public:
    CreateMicrosoftADResult();
    CreateMicrosoftADResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateMicrosoftADResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the directory that was created.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory that was created.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }

    /**
     * <p>The identifier of the directory that was created.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory that was created.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory that was created.</p>
     */
    inline CreateMicrosoftADResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory that was created.</p>
     */
    inline CreateMicrosoftADResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory that was created.</p>
     */
    inline CreateMicrosoftADResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}

  private:

    Aws::String m_directoryId;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
