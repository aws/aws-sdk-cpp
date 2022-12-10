/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/model/InterfaceRequest.h>
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
   * The transport parameters that you want to associate with an incoming media
   * stream.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/InputConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class InputConfigurationRequest
  {
  public:
    AWS_MEDIACONNECT_API InputConfigurationRequest();
    AWS_MEDIACONNECT_API InputConfigurationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API InputConfigurationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The port that you want the flow to listen on for an incoming media stream.
     */
    inline int GetInputPort() const{ return m_inputPort; }

    /**
     * The port that you want the flow to listen on for an incoming media stream.
     */
    inline bool InputPortHasBeenSet() const { return m_inputPortHasBeenSet; }

    /**
     * The port that you want the flow to listen on for an incoming media stream.
     */
    inline void SetInputPort(int value) { m_inputPortHasBeenSet = true; m_inputPort = value; }

    /**
     * The port that you want the flow to listen on for an incoming media stream.
     */
    inline InputConfigurationRequest& WithInputPort(int value) { SetInputPort(value); return *this;}


    /**
     * The VPC interface that you want to use for the incoming media stream.
     */
    inline const InterfaceRequest& GetInterface() const{ return m_interface; }

    /**
     * The VPC interface that you want to use for the incoming media stream.
     */
    inline bool InterfaceHasBeenSet() const { return m_interfaceHasBeenSet; }

    /**
     * The VPC interface that you want to use for the incoming media stream.
     */
    inline void SetInterface(const InterfaceRequest& value) { m_interfaceHasBeenSet = true; m_interface = value; }

    /**
     * The VPC interface that you want to use for the incoming media stream.
     */
    inline void SetInterface(InterfaceRequest&& value) { m_interfaceHasBeenSet = true; m_interface = std::move(value); }

    /**
     * The VPC interface that you want to use for the incoming media stream.
     */
    inline InputConfigurationRequest& WithInterface(const InterfaceRequest& value) { SetInterface(value); return *this;}

    /**
     * The VPC interface that you want to use for the incoming media stream.
     */
    inline InputConfigurationRequest& WithInterface(InterfaceRequest&& value) { SetInterface(std::move(value)); return *this;}

  private:

    int m_inputPort;
    bool m_inputPortHasBeenSet = false;

    InterfaceRequest m_interface;
    bool m_interfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
