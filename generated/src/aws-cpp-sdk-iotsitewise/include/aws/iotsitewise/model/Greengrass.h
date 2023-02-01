/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains details for a gateway that runs on IoT Greengrass. To create a
   * gateway that runs on IoT Greengrass, you must add the IoT SiteWise connector to
   * a Greengrass group and deploy it. Your Greengrass group must also have
   * permissions to upload data to IoT SiteWise. For more information, see <a
   * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/gateway-connector.html">Ingesting
   * data using a gateway</a> in the <i>IoT SiteWise User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/Greengrass">AWS
   * API Reference</a></p>
   */
  class Greengrass
  {
  public:
    AWS_IOTSITEWISE_API Greengrass();
    AWS_IOTSITEWISE_API Greengrass(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Greengrass& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Greengrass group. For more information about how to find a group's ARN,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/listgroups-get.html">ListGroups</a>
     * and <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/getgroup-get.html">GetGroup</a>
     * in the <i>IoT Greengrass API Reference</i>.</p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Greengrass group. For more information about how to find a group's ARN,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/listgroups-get.html">ListGroups</a>
     * and <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/getgroup-get.html">GetGroup</a>
     * in the <i>IoT Greengrass API Reference</i>.</p>
     */
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Greengrass group. For more information about how to find a group's ARN,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/listgroups-get.html">ListGroups</a>
     * and <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/getgroup-get.html">GetGroup</a>
     * in the <i>IoT Greengrass API Reference</i>.</p>
     */
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Greengrass group. For more information about how to find a group's ARN,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/listgroups-get.html">ListGroups</a>
     * and <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/getgroup-get.html">GetGroup</a>
     * in the <i>IoT Greengrass API Reference</i>.</p>
     */
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Greengrass group. For more information about how to find a group's ARN,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/listgroups-get.html">ListGroups</a>
     * and <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/getgroup-get.html">GetGroup</a>
     * in the <i>IoT Greengrass API Reference</i>.</p>
     */
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Greengrass group. For more information about how to find a group's ARN,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/listgroups-get.html">ListGroups</a>
     * and <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/getgroup-get.html">GetGroup</a>
     * in the <i>IoT Greengrass API Reference</i>.</p>
     */
    inline Greengrass& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Greengrass group. For more information about how to find a group's ARN,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/listgroups-get.html">ListGroups</a>
     * and <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/getgroup-get.html">GetGroup</a>
     * in the <i>IoT Greengrass API Reference</i>.</p>
     */
    inline Greengrass& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Greengrass group. For more information about how to find a group's ARN,
     * see <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/listgroups-get.html">ListGroups</a>
     * and <a
     * href="https://docs.aws.amazon.com/greengrass/latest/apireference/getgroup-get.html">GetGroup</a>
     * in the <i>IoT Greengrass API Reference</i>.</p>
     */
    inline Greengrass& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}

  private:

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
