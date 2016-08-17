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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PlatformType.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes the name of an SSM document.</p>
   */
  class AWS_SSM_API DocumentIdentifier
  {
  public:
    DocumentIdentifier();
    DocumentIdentifier(const Aws::Utils::Json::JsonValue& jsonValue);
    DocumentIdentifier& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the SSM document.</p>
     */
    inline DocumentIdentifier& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline DocumentIdentifier& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the SSM document.</p>
     */
    inline DocumentIdentifier& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The AWS user account of the person who created the document.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The AWS user account of the person who created the document.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The AWS user account of the person who created the document.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The AWS user account of the person who created the document.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The AWS user account of the person who created the document.</p>
     */
    inline DocumentIdentifier& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The AWS user account of the person who created the document.</p>
     */
    inline DocumentIdentifier& WithOwner(Aws::String&& value) { SetOwner(value); return *this;}

    /**
     * <p>The AWS user account of the person who created the document.</p>
     */
    inline DocumentIdentifier& WithOwner(const char* value) { SetOwner(value); return *this;}

    /**
     * <p>The operating system platform. </p>
     */
    inline const Aws::Vector<PlatformType>& GetPlatformTypes() const{ return m_platformTypes; }

    /**
     * <p>The operating system platform. </p>
     */
    inline void SetPlatformTypes(const Aws::Vector<PlatformType>& value) { m_platformTypesHasBeenSet = true; m_platformTypes = value; }

    /**
     * <p>The operating system platform. </p>
     */
    inline void SetPlatformTypes(Aws::Vector<PlatformType>&& value) { m_platformTypesHasBeenSet = true; m_platformTypes = value; }

    /**
     * <p>The operating system platform. </p>
     */
    inline DocumentIdentifier& WithPlatformTypes(const Aws::Vector<PlatformType>& value) { SetPlatformTypes(value); return *this;}

    /**
     * <p>The operating system platform. </p>
     */
    inline DocumentIdentifier& WithPlatformTypes(Aws::Vector<PlatformType>&& value) { SetPlatformTypes(value); return *this;}

    /**
     * <p>The operating system platform. </p>
     */
    inline DocumentIdentifier& AddPlatformTypes(const PlatformType& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(value); return *this; }

    /**
     * <p>The operating system platform. </p>
     */
    inline DocumentIdentifier& AddPlatformTypes(PlatformType&& value) { m_platformTypesHasBeenSet = true; m_platformTypes.push_back(value); return *this; }

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    Aws::String m_owner;
    bool m_ownerHasBeenSet;
    Aws::Vector<PlatformType> m_platformTypes;
    bool m_platformTypesHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
