/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/FirstBoot.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Configure launced instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/LaunchedInstance">AWS
   * API Reference</a></p>
   */
  class AWS_MGN_API LaunchedInstance
  {
  public:
    LaunchedInstance();
    LaunchedInstance(Aws::Utils::Json::JsonView jsonValue);
    LaunchedInstance& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configure launced instance EC2 ID.</p>
     */
    inline const Aws::String& GetEc2InstanceID() const{ return m_ec2InstanceID; }

    /**
     * <p>Configure launced instance EC2 ID.</p>
     */
    inline bool Ec2InstanceIDHasBeenSet() const { return m_ec2InstanceIDHasBeenSet; }

    /**
     * <p>Configure launced instance EC2 ID.</p>
     */
    inline void SetEc2InstanceID(const Aws::String& value) { m_ec2InstanceIDHasBeenSet = true; m_ec2InstanceID = value; }

    /**
     * <p>Configure launced instance EC2 ID.</p>
     */
    inline void SetEc2InstanceID(Aws::String&& value) { m_ec2InstanceIDHasBeenSet = true; m_ec2InstanceID = std::move(value); }

    /**
     * <p>Configure launced instance EC2 ID.</p>
     */
    inline void SetEc2InstanceID(const char* value) { m_ec2InstanceIDHasBeenSet = true; m_ec2InstanceID.assign(value); }

    /**
     * <p>Configure launced instance EC2 ID.</p>
     */
    inline LaunchedInstance& WithEc2InstanceID(const Aws::String& value) { SetEc2InstanceID(value); return *this;}

    /**
     * <p>Configure launced instance EC2 ID.</p>
     */
    inline LaunchedInstance& WithEc2InstanceID(Aws::String&& value) { SetEc2InstanceID(std::move(value)); return *this;}

    /**
     * <p>Configure launced instance EC2 ID.</p>
     */
    inline LaunchedInstance& WithEc2InstanceID(const char* value) { SetEc2InstanceID(value); return *this;}


    /**
     * <p>Configure launced instance first boot.</p>
     */
    inline const FirstBoot& GetFirstBoot() const{ return m_firstBoot; }

    /**
     * <p>Configure launced instance first boot.</p>
     */
    inline bool FirstBootHasBeenSet() const { return m_firstBootHasBeenSet; }

    /**
     * <p>Configure launced instance first boot.</p>
     */
    inline void SetFirstBoot(const FirstBoot& value) { m_firstBootHasBeenSet = true; m_firstBoot = value; }

    /**
     * <p>Configure launced instance first boot.</p>
     */
    inline void SetFirstBoot(FirstBoot&& value) { m_firstBootHasBeenSet = true; m_firstBoot = std::move(value); }

    /**
     * <p>Configure launced instance first boot.</p>
     */
    inline LaunchedInstance& WithFirstBoot(const FirstBoot& value) { SetFirstBoot(value); return *this;}

    /**
     * <p>Configure launced instance first boot.</p>
     */
    inline LaunchedInstance& WithFirstBoot(FirstBoot&& value) { SetFirstBoot(std::move(value)); return *this;}


    /**
     * <p>Configure launced instance Job ID.</p>
     */
    inline const Aws::String& GetJobID() const{ return m_jobID; }

    /**
     * <p>Configure launced instance Job ID.</p>
     */
    inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }

    /**
     * <p>Configure launced instance Job ID.</p>
     */
    inline void SetJobID(const Aws::String& value) { m_jobIDHasBeenSet = true; m_jobID = value; }

    /**
     * <p>Configure launced instance Job ID.</p>
     */
    inline void SetJobID(Aws::String&& value) { m_jobIDHasBeenSet = true; m_jobID = std::move(value); }

    /**
     * <p>Configure launced instance Job ID.</p>
     */
    inline void SetJobID(const char* value) { m_jobIDHasBeenSet = true; m_jobID.assign(value); }

    /**
     * <p>Configure launced instance Job ID.</p>
     */
    inline LaunchedInstance& WithJobID(const Aws::String& value) { SetJobID(value); return *this;}

    /**
     * <p>Configure launced instance Job ID.</p>
     */
    inline LaunchedInstance& WithJobID(Aws::String&& value) { SetJobID(std::move(value)); return *this;}

    /**
     * <p>Configure launced instance Job ID.</p>
     */
    inline LaunchedInstance& WithJobID(const char* value) { SetJobID(value); return *this;}

  private:

    Aws::String m_ec2InstanceID;
    bool m_ec2InstanceIDHasBeenSet;

    FirstBoot m_firstBoot;
    bool m_firstBootHasBeenSet;

    Aws::String m_jobID;
    bool m_jobIDHasBeenSet;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
