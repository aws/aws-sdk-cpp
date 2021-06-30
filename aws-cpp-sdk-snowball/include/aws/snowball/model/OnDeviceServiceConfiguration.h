/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/model/NFSOnDeviceServiceConfiguration.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>An object that represents metadata and configuration settings for services on
   * an AWS Snow Family device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/OnDeviceServiceConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_SNOWBALL_API OnDeviceServiceConfiguration
  {
  public:
    OnDeviceServiceConfiguration();
    OnDeviceServiceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    OnDeviceServiceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the NFS service on a Snow Family device.</p>
     */
    inline const NFSOnDeviceServiceConfiguration& GetNFSOnDeviceService() const{ return m_nFSOnDeviceService; }

    /**
     * <p>Represents the NFS service on a Snow Family device.</p>
     */
    inline bool NFSOnDeviceServiceHasBeenSet() const { return m_nFSOnDeviceServiceHasBeenSet; }

    /**
     * <p>Represents the NFS service on a Snow Family device.</p>
     */
    inline void SetNFSOnDeviceService(const NFSOnDeviceServiceConfiguration& value) { m_nFSOnDeviceServiceHasBeenSet = true; m_nFSOnDeviceService = value; }

    /**
     * <p>Represents the NFS service on a Snow Family device.</p>
     */
    inline void SetNFSOnDeviceService(NFSOnDeviceServiceConfiguration&& value) { m_nFSOnDeviceServiceHasBeenSet = true; m_nFSOnDeviceService = std::move(value); }

    /**
     * <p>Represents the NFS service on a Snow Family device.</p>
     */
    inline OnDeviceServiceConfiguration& WithNFSOnDeviceService(const NFSOnDeviceServiceConfiguration& value) { SetNFSOnDeviceService(value); return *this;}

    /**
     * <p>Represents the NFS service on a Snow Family device.</p>
     */
    inline OnDeviceServiceConfiguration& WithNFSOnDeviceService(NFSOnDeviceServiceConfiguration&& value) { SetNFSOnDeviceService(std::move(value)); return *this;}

  private:

    NFSOnDeviceServiceConfiguration m_nFSOnDeviceService;
    bool m_nFSOnDeviceServiceHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
