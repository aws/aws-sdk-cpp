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
#include <aws/clouddirectory/model/ObjectReference.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
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

  /**
   * <p>Represents the output of a ListObjectChildren operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/BatchListObjectChildren">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchListObjectChildren
  {
  public:
    BatchListObjectChildren();
    BatchListObjectChildren(const Aws::Utils::Json::JsonValue& jsonValue);
    BatchListObjectChildren& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Reference of the object for which child objects are being listed.</p>
     */
    inline const ObjectReference& GetObjectReference() const{ return m_objectReference; }

    /**
     * <p>Reference of the object for which child objects are being listed.</p>
     */
    inline void SetObjectReference(const ObjectReference& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>Reference of the object for which child objects are being listed.</p>
     */
    inline void SetObjectReference(ObjectReference&& value) { m_objectReferenceHasBeenSet = true; m_objectReference = value; }

    /**
     * <p>Reference of the object for which child objects are being listed.</p>
     */
    inline BatchListObjectChildren& WithObjectReference(const ObjectReference& value) { SetObjectReference(value); return *this;}

    /**
     * <p>Reference of the object for which child objects are being listed.</p>
     */
    inline BatchListObjectChildren& WithObjectReference(ObjectReference&& value) { SetObjectReference(value); return *this;}

    /**
     * <p>Token used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token used for pagination.</p>
     */
    inline BatchListObjectChildren& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token used for pagination.</p>
     */
    inline BatchListObjectChildren& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token used for pagination.</p>
     */
    inline BatchListObjectChildren& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>Maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of items to be retrieved in a single call. This is an
     * approximate number.</p>
     */
    inline BatchListObjectChildren& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    ObjectReference m_objectReference;
    bool m_objectReferenceHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
