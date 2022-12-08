/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>The application definition for a particular application. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/Definition">AWS API
   * Reference</a></p>
   */
  class Definition
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API Definition();
    AWS_MAINFRAMEMODERNIZATION_API Definition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Definition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration/definitions that identify an
     * application.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }

    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration/definitions that identify an
     * application.</p>
     */
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }

    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration/definitions that identify an
     * application.</p>
     */
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }

    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration/definitions that identify an
     * application.</p>
     */
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }

    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration/definitions that identify an
     * application.</p>
     */
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }

    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration/definitions that identify an
     * application.</p>
     */
    inline Definition& WithContent(const Aws::String& value) { SetContent(value); return *this;}

    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration/definitions that identify an
     * application.</p>
     */
    inline Definition& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}

    /**
     * <p>The content of the application definition. This is a JSON object that
     * contains the resource configuration/definitions that identify an
     * application.</p>
     */
    inline Definition& WithContent(const char* value) { SetContent(value); return *this;}


    /**
     * <p>The S3 bucket that contains the application definition.</p>
     */
    inline const Aws::String& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The S3 bucket that contains the application definition.</p>
     */
    inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }

    /**
     * <p>The S3 bucket that contains the application definition.</p>
     */
    inline void SetS3Location(const Aws::String& value) { m_s3LocationHasBeenSet = true; m_s3Location = value; }

    /**
     * <p>The S3 bucket that contains the application definition.</p>
     */
    inline void SetS3Location(Aws::String&& value) { m_s3LocationHasBeenSet = true; m_s3Location = std::move(value); }

    /**
     * <p>The S3 bucket that contains the application definition.</p>
     */
    inline void SetS3Location(const char* value) { m_s3LocationHasBeenSet = true; m_s3Location.assign(value); }

    /**
     * <p>The S3 bucket that contains the application definition.</p>
     */
    inline Definition& WithS3Location(const Aws::String& value) { SetS3Location(value); return *this;}

    /**
     * <p>The S3 bucket that contains the application definition.</p>
     */
    inline Definition& WithS3Location(Aws::String&& value) { SetS3Location(std::move(value)); return *this;}

    /**
     * <p>The S3 bucket that contains the application definition.</p>
     */
    inline Definition& WithS3Location(const char* value) { SetS3Location(value); return *this;}

  private:

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::String m_s3Location;
    bool m_s3LocationHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
