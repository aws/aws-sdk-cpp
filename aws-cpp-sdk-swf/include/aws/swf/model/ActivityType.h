/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ActivityType
  {
  public:
    AWS_SWF_API ActivityType();
    AWS_SWF_API ActivityType(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API ActivityType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SWF_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of this activity.</p>  <p>The combination of activity type
     * name and version must be unique within a domain.</p> 
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of this activity.</p>  <p>The combination of activity type
     * name and version must be unique within a domain.</p> 
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of this activity.</p>  <p>The combination of activity type
     * name and version must be unique within a domain.</p> 
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of this activity.</p>  <p>The combination of activity type
     * name and version must be unique within a domain.</p> 
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of this activity.</p>  <p>The combination of activity type
     * name and version must be unique within a domain.</p> 
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of this activity.</p>  <p>The combination of activity type
     * name and version must be unique within a domain.</p> 
     */
    inline ActivityType& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of this activity.</p>  <p>The combination of activity type
     * name and version must be unique within a domain.</p> 
     */
    inline ActivityType& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of this activity.</p>  <p>The combination of activity type
     * name and version must be unique within a domain.</p> 
     */
    inline ActivityType& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The version of this activity.</p>  <p>The combination of activity type
     * name and version must be unique with in a domain.</p> 
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of this activity.</p>  <p>The combination of activity type
     * name and version must be unique with in a domain.</p> 
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of this activity.</p>  <p>The combination of activity type
     * name and version must be unique with in a domain.</p> 
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of this activity.</p>  <p>The combination of activity type
     * name and version must be unique with in a domain.</p> 
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of this activity.</p>  <p>The combination of activity type
     * name and version must be unique with in a domain.</p> 
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of this activity.</p>  <p>The combination of activity type
     * name and version must be unique with in a domain.</p> 
     */
    inline ActivityType& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of this activity.</p>  <p>The combination of activity type
     * name and version must be unique with in a domain.</p> 
     */
    inline ActivityType& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of this activity.</p>  <p>The combination of activity type
     * name and version must be unique with in a domain.</p> 
     */
    inline ActivityType& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
