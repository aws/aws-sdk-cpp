/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * The VPC interface that you want to designate where the media stream is coming
   * from or going to.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/InterfaceRequest">AWS
   * API Reference</a></p>
   */
  class InterfaceRequest
  {
  public:
    AWS_MEDIACONNECT_API InterfaceRequest();
    AWS_MEDIACONNECT_API InterfaceRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API InterfaceRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The name of the VPC interface.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the VPC interface.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * The name of the VPC interface.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the VPC interface.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the VPC interface.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the VPC interface.
     */
    inline InterfaceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the VPC interface.
     */
    inline InterfaceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the VPC interface.
     */
    inline InterfaceRequest& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
