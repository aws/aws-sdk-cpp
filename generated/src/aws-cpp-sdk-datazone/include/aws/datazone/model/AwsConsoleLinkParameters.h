/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The parameters of the console link specified as part of the environment
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AwsConsoleLinkParameters">AWS
   * API Reference</a></p>
   */
  class AwsConsoleLinkParameters
  {
  public:
    AWS_DATAZONE_API AwsConsoleLinkParameters();
    AWS_DATAZONE_API AwsConsoleLinkParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AwsConsoleLinkParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of the console link specified as part of the environment action.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }
    inline AwsConsoleLinkParameters& WithUri(const Aws::String& value) { SetUri(value); return *this;}
    inline AwsConsoleLinkParameters& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}
    inline AwsConsoleLinkParameters& WithUri(const char* value) { SetUri(value); return *this;}
    ///@}
  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
