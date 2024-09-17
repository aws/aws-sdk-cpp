/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
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
namespace Greengrass
{
namespace Model
{

  /**
   * Information about a subscription.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/Subscription">AWS
   * API Reference</a></p>
   */
  class Subscription
  {
  public:
    AWS_GREENGRASS_API Subscription();
    AWS_GREENGRASS_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A descriptive or arbitrary ID for the subscription. This value must be unique
     * within the subscription definition version. Max length is 128 characters with
     * pattern ''[a-zA-Z0-9:_-]+''.
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Subscription& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Subscription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Subscription& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * The source of the subscription. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline Subscription& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline Subscription& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline Subscription& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * The MQTT topic used to route the message.
     */
    inline const Aws::String& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline void SetSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.assign(value); }
    inline Subscription& WithSubject(const Aws::String& value) { SetSubject(value); return *this;}
    inline Subscription& WithSubject(Aws::String&& value) { SetSubject(std::move(value)); return *this;}
    inline Subscription& WithSubject(const char* value) { SetSubject(value); return *this;}
    ///@}

    ///@{
    /**
     * Where the message is sent to. Can be a thing ARN, a Lambda function ARN, a
     * connector ARN, 'cloud' (which represents the AWS IoT cloud), or
     * 'GGShadowService'.
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline Subscription& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline Subscription& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline Subscription& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
