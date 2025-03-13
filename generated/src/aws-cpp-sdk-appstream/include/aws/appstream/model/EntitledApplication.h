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
   * <p>The application associated to an entitlement. Access is controlled based on
   * user attributes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/EntitledApplication">AWS
   * API Reference</a></p>
   */
  class EntitledApplication
  {
  public:
    AWS_APPSTREAM_API EntitledApplication() = default;
    AWS_APPSTREAM_API EntitledApplication(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API EntitledApplication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the application.</p>
     */
    inline const Aws::String& GetApplicationIdentifier() const { return m_applicationIdentifier; }
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
    template<typename ApplicationIdentifierT = Aws::String>
    void SetApplicationIdentifier(ApplicationIdentifierT&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::forward<ApplicationIdentifierT>(value); }
    template<typename ApplicationIdentifierT = Aws::String>
    EntitledApplication& WithApplicationIdentifier(ApplicationIdentifierT&& value) { SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
