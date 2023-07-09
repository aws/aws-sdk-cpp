/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes an association between an app block builder and app
   * block.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AppBlockBuilderAppBlockAssociation">AWS
   * API Reference</a></p>
   */
  class AppBlockBuilderAppBlockAssociation
  {
  public:
    AWS_APPSTREAM_API AppBlockBuilderAppBlockAssociation();
    AWS_APPSTREAM_API AppBlockBuilderAppBlockAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API AppBlockBuilderAppBlockAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the app block.</p>
     */
    inline const Aws::String& GetAppBlockArn() const{ return m_appBlockArn; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(const Aws::String& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = value; }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(Aws::String&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::move(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline void SetAppBlockArn(const char* value) { m_appBlockArnHasBeenSet = true; m_appBlockArn.assign(value); }

    /**
     * <p>The ARN of the app block.</p>
     */
    inline AppBlockBuilderAppBlockAssociation& WithAppBlockArn(const Aws::String& value) { SetAppBlockArn(value); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline AppBlockBuilderAppBlockAssociation& WithAppBlockArn(Aws::String&& value) { SetAppBlockArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the app block.</p>
     */
    inline AppBlockBuilderAppBlockAssociation& WithAppBlockArn(const char* value) { SetAppBlockArn(value); return *this;}


    /**
     * <p>The name of the app block builder.</p>
     */
    inline const Aws::String& GetAppBlockBuilderName() const{ return m_appBlockBuilderName; }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline bool AppBlockBuilderNameHasBeenSet() const { return m_appBlockBuilderNameHasBeenSet; }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline void SetAppBlockBuilderName(const Aws::String& value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName = value; }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline void SetAppBlockBuilderName(Aws::String&& value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName = std::move(value); }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline void SetAppBlockBuilderName(const char* value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName.assign(value); }

    /**
     * <p>The name of the app block builder.</p>
     */
    inline AppBlockBuilderAppBlockAssociation& WithAppBlockBuilderName(const Aws::String& value) { SetAppBlockBuilderName(value); return *this;}

    /**
     * <p>The name of the app block builder.</p>
     */
    inline AppBlockBuilderAppBlockAssociation& WithAppBlockBuilderName(Aws::String&& value) { SetAppBlockBuilderName(std::move(value)); return *this;}

    /**
     * <p>The name of the app block builder.</p>
     */
    inline AppBlockBuilderAppBlockAssociation& WithAppBlockBuilderName(const char* value) { SetAppBlockBuilderName(value); return *this;}

  private:

    Aws::String m_appBlockArn;
    bool m_appBlockArnHasBeenSet = false;

    Aws::String m_appBlockBuilderName;
    bool m_appBlockBuilderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
