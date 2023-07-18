/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/Type.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>The HTTP package configuration properties for the requested VOD
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HttpPackageConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API HttpPackageConfiguration
  {
  public:
    HttpPackageConfiguration();
    HttpPackageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    HttpPackageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The relative path to the URL for this VOD source. This is combined with
     * SourceLocation::HttpConfiguration::BaseUrl to form a valid URL.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The relative path to the URL for this VOD source. This is combined with
     * SourceLocation::HttpConfiguration::BaseUrl to form a valid URL.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The relative path to the URL for this VOD source. This is combined with
     * SourceLocation::HttpConfiguration::BaseUrl to form a valid URL.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The relative path to the URL for this VOD source. This is combined with
     * SourceLocation::HttpConfiguration::BaseUrl to form a valid URL.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The relative path to the URL for this VOD source. This is combined with
     * SourceLocation::HttpConfiguration::BaseUrl to form a valid URL.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The relative path to the URL for this VOD source. This is combined with
     * SourceLocation::HttpConfiguration::BaseUrl to form a valid URL.</p>
     */
    inline HttpPackageConfiguration& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The relative path to the URL for this VOD source. This is combined with
     * SourceLocation::HttpConfiguration::BaseUrl to form a valid URL.</p>
     */
    inline HttpPackageConfiguration& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The relative path to the URL for this VOD source. This is combined with
     * SourceLocation::HttpConfiguration::BaseUrl to form a valid URL.</p>
     */
    inline HttpPackageConfiguration& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The name of the source group. This has to match one of the
     * Channel::Outputs::SourceGroup.</p>
     */
    inline const Aws::String& GetSourceGroup() const{ return m_sourceGroup; }

    /**
     * <p>The name of the source group. This has to match one of the
     * Channel::Outputs::SourceGroup.</p>
     */
    inline bool SourceGroupHasBeenSet() const { return m_sourceGroupHasBeenSet; }

    /**
     * <p>The name of the source group. This has to match one of the
     * Channel::Outputs::SourceGroup.</p>
     */
    inline void SetSourceGroup(const Aws::String& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = value; }

    /**
     * <p>The name of the source group. This has to match one of the
     * Channel::Outputs::SourceGroup.</p>
     */
    inline void SetSourceGroup(Aws::String&& value) { m_sourceGroupHasBeenSet = true; m_sourceGroup = std::move(value); }

    /**
     * <p>The name of the source group. This has to match one of the
     * Channel::Outputs::SourceGroup.</p>
     */
    inline void SetSourceGroup(const char* value) { m_sourceGroupHasBeenSet = true; m_sourceGroup.assign(value); }

    /**
     * <p>The name of the source group. This has to match one of the
     * Channel::Outputs::SourceGroup.</p>
     */
    inline HttpPackageConfiguration& WithSourceGroup(const Aws::String& value) { SetSourceGroup(value); return *this;}

    /**
     * <p>The name of the source group. This has to match one of the
     * Channel::Outputs::SourceGroup.</p>
     */
    inline HttpPackageConfiguration& WithSourceGroup(Aws::String&& value) { SetSourceGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the source group. This has to match one of the
     * Channel::Outputs::SourceGroup.</p>
     */
    inline HttpPackageConfiguration& WithSourceGroup(const char* value) { SetSourceGroup(value); return *this;}


    /**
     * <p>The streaming protocol for this package configuration. Supported values are
     * HLS and DASH.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The streaming protocol for this package configuration. Supported values are
     * HLS and DASH.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The streaming protocol for this package configuration. Supported values are
     * HLS and DASH.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The streaming protocol for this package configuration. Supported values are
     * HLS and DASH.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The streaming protocol for this package configuration. Supported values are
     * HLS and DASH.</p>
     */
    inline HttpPackageConfiguration& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The streaming protocol for this package configuration. Supported values are
     * HLS and DASH.</p>
     */
    inline HttpPackageConfiguration& WithType(Type&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::String m_sourceGroup;
    bool m_sourceGroupHasBeenSet;

    Type m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
