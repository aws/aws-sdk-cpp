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
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Rekognition
{
namespace Model
{
  class AWS_REKOGNITION_API DeleteFacesResult
  {
  public:
    DeleteFacesResult();
    DeleteFacesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteFacesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeletedFaces() const{ return m_deletedFaces; }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline void SetDeletedFaces(const Aws::Vector<Aws::String>& value) { m_deletedFaces = value; }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline void SetDeletedFaces(Aws::Vector<Aws::String>&& value) { m_deletedFaces = value; }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& WithDeletedFaces(const Aws::Vector<Aws::String>& value) { SetDeletedFaces(value); return *this;}

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& WithDeletedFaces(Aws::Vector<Aws::String>&& value) { SetDeletedFaces(value); return *this;}

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& AddDeletedFaces(const Aws::String& value) { m_deletedFaces.push_back(value); return *this; }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& AddDeletedFaces(Aws::String&& value) { m_deletedFaces.push_back(value); return *this; }

    /**
     * <p>An array of strings (face IDs) of the faces that were deleted.</p>
     */
    inline DeleteFacesResult& AddDeletedFaces(const char* value) { m_deletedFaces.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_deletedFaces;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
