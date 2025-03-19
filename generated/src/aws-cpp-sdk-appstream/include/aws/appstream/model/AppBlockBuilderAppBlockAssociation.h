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
    AWS_APPSTREAM_API AppBlockBuilderAppBlockAssociation() = default;
    AWS_APPSTREAM_API AppBlockBuilderAppBlockAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API AppBlockBuilderAppBlockAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the app block.</p>
     */
    inline const Aws::String& GetAppBlockArn() const { return m_appBlockArn; }
    inline bool AppBlockArnHasBeenSet() const { return m_appBlockArnHasBeenSet; }
    template<typename AppBlockArnT = Aws::String>
    void SetAppBlockArn(AppBlockArnT&& value) { m_appBlockArnHasBeenSet = true; m_appBlockArn = std::forward<AppBlockArnT>(value); }
    template<typename AppBlockArnT = Aws::String>
    AppBlockBuilderAppBlockAssociation& WithAppBlockArn(AppBlockArnT&& value) { SetAppBlockArn(std::forward<AppBlockArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the app block builder.</p>
     */
    inline const Aws::String& GetAppBlockBuilderName() const { return m_appBlockBuilderName; }
    inline bool AppBlockBuilderNameHasBeenSet() const { return m_appBlockBuilderNameHasBeenSet; }
    template<typename AppBlockBuilderNameT = Aws::String>
    void SetAppBlockBuilderName(AppBlockBuilderNameT&& value) { m_appBlockBuilderNameHasBeenSet = true; m_appBlockBuilderName = std::forward<AppBlockBuilderNameT>(value); }
    template<typename AppBlockBuilderNameT = Aws::String>
    AppBlockBuilderAppBlockAssociation& WithAppBlockBuilderName(AppBlockBuilderNameT&& value) { SetAppBlockBuilderName(std::forward<AppBlockBuilderNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appBlockArn;
    bool m_appBlockArnHasBeenSet = false;

    Aws::String m_appBlockBuilderName;
    bool m_appBlockBuilderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
