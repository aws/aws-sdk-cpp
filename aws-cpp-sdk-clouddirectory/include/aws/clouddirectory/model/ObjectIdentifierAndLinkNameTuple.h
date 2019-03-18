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
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>A pair of ObjectIdentifier and LinkName.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/ObjectIdentifierAndLinkNameTuple">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDDIRECTORY_API ObjectIdentifierAndLinkNameTuple
  {
  public:
    ObjectIdentifierAndLinkNameTuple();
    ObjectIdentifierAndLinkNameTuple(Aws::Utils::Json::JsonView jsonValue);
    ObjectIdentifierAndLinkNameTuple& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline const Aws::String& GetObjectIdentifier() const{ return m_objectIdentifier; }

    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline bool ObjectIdentifierHasBeenSet() const { return m_objectIdentifierHasBeenSet; }

    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline void SetObjectIdentifier(const Aws::String& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = value; }

    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline void SetObjectIdentifier(Aws::String&& value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier = std::move(value); }

    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline void SetObjectIdentifier(const char* value) { m_objectIdentifierHasBeenSet = true; m_objectIdentifier.assign(value); }

    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline ObjectIdentifierAndLinkNameTuple& WithObjectIdentifier(const Aws::String& value) { SetObjectIdentifier(value); return *this;}

    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline ObjectIdentifierAndLinkNameTuple& WithObjectIdentifier(Aws::String&& value) { SetObjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID that is associated with the object.</p>
     */
    inline ObjectIdentifierAndLinkNameTuple& WithObjectIdentifier(const char* value) { SetObjectIdentifier(value); return *this;}


    /**
     * <p>The name of the link between the parent and the child object.</p>
     */
    inline const Aws::String& GetLinkName() const{ return m_linkName; }

    /**
     * <p>The name of the link between the parent and the child object.</p>
     */
    inline bool LinkNameHasBeenSet() const { return m_linkNameHasBeenSet; }

    /**
     * <p>The name of the link between the parent and the child object.</p>
     */
    inline void SetLinkName(const Aws::String& value) { m_linkNameHasBeenSet = true; m_linkName = value; }

    /**
     * <p>The name of the link between the parent and the child object.</p>
     */
    inline void SetLinkName(Aws::String&& value) { m_linkNameHasBeenSet = true; m_linkName = std::move(value); }

    /**
     * <p>The name of the link between the parent and the child object.</p>
     */
    inline void SetLinkName(const char* value) { m_linkNameHasBeenSet = true; m_linkName.assign(value); }

    /**
     * <p>The name of the link between the parent and the child object.</p>
     */
    inline ObjectIdentifierAndLinkNameTuple& WithLinkName(const Aws::String& value) { SetLinkName(value); return *this;}

    /**
     * <p>The name of the link between the parent and the child object.</p>
     */
    inline ObjectIdentifierAndLinkNameTuple& WithLinkName(Aws::String&& value) { SetLinkName(std::move(value)); return *this;}

    /**
     * <p>The name of the link between the parent and the child object.</p>
     */
    inline ObjectIdentifierAndLinkNameTuple& WithLinkName(const char* value) { SetLinkName(value); return *this;}

  private:

    Aws::String m_objectIdentifier;
    bool m_objectIdentifierHasBeenSet;

    Aws::String m_linkName;
    bool m_linkNameHasBeenSet;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
