/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devicefarm/model/TestGridSessionArtifactType.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>Artifacts are video and other files that are produced in the process of
   * running a browser in an automated context. </p>  <p>Video elements might
   * be broken up into multiple artifacts as they grow in size during creation. </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TestGridSessionArtifact">AWS
   * API Reference</a></p>
   */
  class TestGridSessionArtifact
  {
  public:
    AWS_DEVICEFARM_API TestGridSessionArtifact();
    AWS_DEVICEFARM_API TestGridSessionArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API TestGridSessionArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEVICEFARM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The file name of the artifact.</p>
     */
    inline const Aws::String& GetFilename() const{ return m_filename; }

    /**
     * <p>The file name of the artifact.</p>
     */
    inline bool FilenameHasBeenSet() const { return m_filenameHasBeenSet; }

    /**
     * <p>The file name of the artifact.</p>
     */
    inline void SetFilename(const Aws::String& value) { m_filenameHasBeenSet = true; m_filename = value; }

    /**
     * <p>The file name of the artifact.</p>
     */
    inline void SetFilename(Aws::String&& value) { m_filenameHasBeenSet = true; m_filename = std::move(value); }

    /**
     * <p>The file name of the artifact.</p>
     */
    inline void SetFilename(const char* value) { m_filenameHasBeenSet = true; m_filename.assign(value); }

    /**
     * <p>The file name of the artifact.</p>
     */
    inline TestGridSessionArtifact& WithFilename(const Aws::String& value) { SetFilename(value); return *this;}

    /**
     * <p>The file name of the artifact.</p>
     */
    inline TestGridSessionArtifact& WithFilename(Aws::String&& value) { SetFilename(std::move(value)); return *this;}

    /**
     * <p>The file name of the artifact.</p>
     */
    inline TestGridSessionArtifact& WithFilename(const char* value) { SetFilename(value); return *this;}


    /**
     * <p>The kind of artifact.</p>
     */
    inline const TestGridSessionArtifactType& GetType() const{ return m_type; }

    /**
     * <p>The kind of artifact.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The kind of artifact.</p>
     */
    inline void SetType(const TestGridSessionArtifactType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The kind of artifact.</p>
     */
    inline void SetType(TestGridSessionArtifactType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The kind of artifact.</p>
     */
    inline TestGridSessionArtifact& WithType(const TestGridSessionArtifactType& value) { SetType(value); return *this;}

    /**
     * <p>The kind of artifact.</p>
     */
    inline TestGridSessionArtifact& WithType(TestGridSessionArtifactType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A semi-stable URL to the content of the object.</p>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }

    /**
     * <p>A semi-stable URL to the content of the object.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>A semi-stable URL to the content of the object.</p>
     */
    inline void SetUrl(const Aws::String& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>A semi-stable URL to the content of the object.</p>
     */
    inline void SetUrl(Aws::String&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>A semi-stable URL to the content of the object.</p>
     */
    inline void SetUrl(const char* value) { m_urlHasBeenSet = true; m_url.assign(value); }

    /**
     * <p>A semi-stable URL to the content of the object.</p>
     */
    inline TestGridSessionArtifact& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}

    /**
     * <p>A semi-stable URL to the content of the object.</p>
     */
    inline TestGridSessionArtifact& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}

    /**
     * <p>A semi-stable URL to the content of the object.</p>
     */
    inline TestGridSessionArtifact& WithUrl(const char* value) { SetUrl(value); return *this;}

  private:

    Aws::String m_filename;
    bool m_filenameHasBeenSet = false;

    TestGridSessionArtifactType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
