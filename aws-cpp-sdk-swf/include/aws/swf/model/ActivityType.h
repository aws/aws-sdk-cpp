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
#include <aws/swf/SWF_EXPORTS.h>
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
namespace SWF
{
namespace Model
{

  /**
   * <p>Represents an activity type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ActivityType">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API ActivityType
  {
  public:
    ActivityType();
    ActivityType(Aws::Utils::Json::JsonView jsonValue);
    ActivityType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique within a domain.</p> </note>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique within a domain.</p> </note>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique within a domain.</p> </note>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique within a domain.</p> </note>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique within a domain.</p> </note>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique within a domain.</p> </note>
     */
    inline ActivityType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique within a domain.</p> </note>
     */
    inline ActivityType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique within a domain.</p> </note>
     */
    inline ActivityType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique with in a domain.</p> </note>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique with in a domain.</p> </note>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique with in a domain.</p> </note>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique with in a domain.</p> </note>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique with in a domain.</p> </note>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique with in a domain.</p> </note>
     */
    inline ActivityType& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique with in a domain.</p> </note>
     */
    inline ActivityType& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of this activity.</p> <note> <p>The combination of activity type
     * name and version must be unique with in a domain.</p> </note>
     */
    inline ActivityType& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
