/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>The container image used to create an Amazon Braket job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/ContainerImage">AWS
   * API Reference</a></p>
   */
  class ContainerImage
  {
  public:
    AWS_BRAKET_API ContainerImage();
    AWS_BRAKET_API ContainerImage(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API ContainerImage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI locating the container image.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The URI locating the container image.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The URI locating the container image.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The URI locating the container image.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The URI locating the container image.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The URI locating the container image.</p>
     */
    inline ContainerImage& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The URI locating the container image.</p>
     */
    inline ContainerImage& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The URI locating the container image.</p>
     */
    inline ContainerImage& WithUri(const char* value) { SetUri(value); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
