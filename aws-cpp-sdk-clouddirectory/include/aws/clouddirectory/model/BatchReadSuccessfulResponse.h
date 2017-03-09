/*
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
#include <aws/clouddirectory/model/BatchListObjectAttributesResponse.h>
#include <aws/clouddirectory/model/BatchListObjectChildrenResponse.h>

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
   * <p>Represents the output of a <code>BatchRead</code> success response
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2016-05-10/BatchReadSuccessfulResponse">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API BatchReadSuccessfulResponse
  {
  public:
    BatchReadSuccessfulResponse();
    BatchReadSuccessfulResponse(const Aws::Utils::Json::JsonValue& jsonValue);
    BatchReadSuccessfulResponse& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Lists all attributes associated with an object.</p>
     */
    inline const BatchListObjectAttributesResponse& GetListObjectAttributes() const{ return m_listObjectAttributes; }

    /**
     * <p>Lists all attributes associated with an object.</p>
     */
    inline void SetListObjectAttributes(const BatchListObjectAttributesResponse& value) { m_listObjectAttributesHasBeenSet = true; m_listObjectAttributes = value; }

    /**
     * <p>Lists all attributes associated with an object.</p>
     */
    inline void SetListObjectAttributes(BatchListObjectAttributesResponse&& value) { m_listObjectAttributesHasBeenSet = true; m_listObjectAttributes = value; }

    /**
     * <p>Lists all attributes associated with an object.</p>
     */
    inline BatchReadSuccessfulResponse& WithListObjectAttributes(const BatchListObjectAttributesResponse& value) { SetListObjectAttributes(value); return *this;}

    /**
     * <p>Lists all attributes associated with an object.</p>
     */
    inline BatchReadSuccessfulResponse& WithListObjectAttributes(BatchListObjectAttributesResponse&& value) { SetListObjectAttributes(value); return *this;}

    /**
     * <p>Returns a paginated list of child objects associated with a given object.</p>
     */
    inline const BatchListObjectChildrenResponse& GetListObjectChildren() const{ return m_listObjectChildren; }

    /**
     * <p>Returns a paginated list of child objects associated with a given object.</p>
     */
    inline void SetListObjectChildren(const BatchListObjectChildrenResponse& value) { m_listObjectChildrenHasBeenSet = true; m_listObjectChildren = value; }

    /**
     * <p>Returns a paginated list of child objects associated with a given object.</p>
     */
    inline void SetListObjectChildren(BatchListObjectChildrenResponse&& value) { m_listObjectChildrenHasBeenSet = true; m_listObjectChildren = value; }

    /**
     * <p>Returns a paginated list of child objects associated with a given object.</p>
     */
    inline BatchReadSuccessfulResponse& WithListObjectChildren(const BatchListObjectChildrenResponse& value) { SetListObjectChildren(value); return *this;}

    /**
     * <p>Returns a paginated list of child objects associated with a given object.</p>
     */
    inline BatchReadSuccessfulResponse& WithListObjectChildren(BatchListObjectChildrenResponse&& value) { SetListObjectChildren(value); return *this;}

  private:
    BatchListObjectAttributesResponse m_listObjectAttributes;
    bool m_listObjectAttributesHasBeenSet;
    BatchListObjectChildrenResponse m_listObjectChildren;
    bool m_listObjectChildrenHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
