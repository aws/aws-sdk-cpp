/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/InputDestinationRequest.h>
#include <aws/medialive/model/MediaConnectFlowRequest.h>
#include <aws/medialive/model/InputSourceRequest.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * A request to update an input.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/UpdateInputRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIALIVE_API UpdateInputRequest : public MediaLiveRequest
  {
  public:
    UpdateInputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateInput"; }

    Aws::String SerializePayload() const override;


    /**
     * Destination settings for PUSH type inputs.
     */
    inline const Aws::Vector<InputDestinationRequest>& GetDestinations() const{ return m_destinations; }

    /**
     * Destination settings for PUSH type inputs.
     */
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }

    /**
     * Destination settings for PUSH type inputs.
     */
    inline void SetDestinations(const Aws::Vector<InputDestinationRequest>& value) { m_destinationsHasBeenSet = true; m_destinations = value; }

    /**
     * Destination settings for PUSH type inputs.
     */
    inline void SetDestinations(Aws::Vector<InputDestinationRequest>&& value) { m_destinationsHasBeenSet = true; m_destinations = std::move(value); }

    /**
     * Destination settings for PUSH type inputs.
     */
    inline UpdateInputRequest& WithDestinations(const Aws::Vector<InputDestinationRequest>& value) { SetDestinations(value); return *this;}

    /**
     * Destination settings for PUSH type inputs.
     */
    inline UpdateInputRequest& WithDestinations(Aws::Vector<InputDestinationRequest>&& value) { SetDestinations(std::move(value)); return *this;}

    /**
     * Destination settings for PUSH type inputs.
     */
    inline UpdateInputRequest& AddDestinations(const InputDestinationRequest& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(value); return *this; }

    /**
     * Destination settings for PUSH type inputs.
     */
    inline UpdateInputRequest& AddDestinations(InputDestinationRequest&& value) { m_destinationsHasBeenSet = true; m_destinations.push_back(std::move(value)); return *this; }


    /**
     * Unique ID of the input.
     */
    inline const Aws::String& GetInputId() const{ return m_inputId; }

    /**
     * Unique ID of the input.
     */
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }

    /**
     * Unique ID of the input.
     */
    inline void SetInputId(const Aws::String& value) { m_inputIdHasBeenSet = true; m_inputId = value; }

    /**
     * Unique ID of the input.
     */
    inline void SetInputId(Aws::String&& value) { m_inputIdHasBeenSet = true; m_inputId = std::move(value); }

    /**
     * Unique ID of the input.
     */
    inline void SetInputId(const char* value) { m_inputIdHasBeenSet = true; m_inputId.assign(value); }

    /**
     * Unique ID of the input.
     */
    inline UpdateInputRequest& WithInputId(const Aws::String& value) { SetInputId(value); return *this;}

    /**
     * Unique ID of the input.
     */
    inline UpdateInputRequest& WithInputId(Aws::String&& value) { SetInputId(std::move(value)); return *this;}

    /**
     * Unique ID of the input.
     */
    inline UpdateInputRequest& WithInputId(const char* value) { SetInputId(value); return *this;}


    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline const Aws::Vector<Aws::String>& GetInputSecurityGroups() const{ return m_inputSecurityGroups; }

    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline bool InputSecurityGroupsHasBeenSet() const { return m_inputSecurityGroupsHasBeenSet; }

    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline void SetInputSecurityGroups(const Aws::Vector<Aws::String>& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups = value; }

    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline void SetInputSecurityGroups(Aws::Vector<Aws::String>&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups = std::move(value); }

    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline UpdateInputRequest& WithInputSecurityGroups(const Aws::Vector<Aws::String>& value) { SetInputSecurityGroups(value); return *this;}

    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline UpdateInputRequest& WithInputSecurityGroups(Aws::Vector<Aws::String>&& value) { SetInputSecurityGroups(std::move(value)); return *this;}

    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline UpdateInputRequest& AddInputSecurityGroups(const Aws::String& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.push_back(value); return *this; }

    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline UpdateInputRequest& AddInputSecurityGroups(Aws::String&& value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.push_back(std::move(value)); return *this; }

    /**
     * A list of security groups referenced by IDs to attach to the input.
     */
    inline UpdateInputRequest& AddInputSecurityGroups(const char* value) { m_inputSecurityGroupsHasBeenSet = true; m_inputSecurityGroups.push_back(value); return *this; }


    /**
     * A list of the MediaConnect Flow ARNs that you want to use as the source of the
     * input. You can specify as few as one
Flow and presently, as many as two. The
     * only requirement is when you have more than one is that each Flow is in
     * a
separate Availability Zone as this ensures your EML input is redundant to AZ
     * issues.

     */
    inline const Aws::Vector<MediaConnectFlowRequest>& GetMediaConnectFlows() const{ return m_mediaConnectFlows; }

    /**
     * A list of the MediaConnect Flow ARNs that you want to use as the source of the
     * input. You can specify as few as one
Flow and presently, as many as two. The
     * only requirement is when you have more than one is that each Flow is in
     * a
separate Availability Zone as this ensures your EML input is redundant to AZ
     * issues.

     */
    inline bool MediaConnectFlowsHasBeenSet() const { return m_mediaConnectFlowsHasBeenSet; }

    /**
     * A list of the MediaConnect Flow ARNs that you want to use as the source of the
     * input. You can specify as few as one
Flow and presently, as many as two. The
     * only requirement is when you have more than one is that each Flow is in
     * a
separate Availability Zone as this ensures your EML input is redundant to AZ
     * issues.

     */
    inline void SetMediaConnectFlows(const Aws::Vector<MediaConnectFlowRequest>& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = value; }

    /**
     * A list of the MediaConnect Flow ARNs that you want to use as the source of the
     * input. You can specify as few as one
Flow and presently, as many as two. The
     * only requirement is when you have more than one is that each Flow is in
     * a
separate Availability Zone as this ensures your EML input is redundant to AZ
     * issues.

     */
    inline void SetMediaConnectFlows(Aws::Vector<MediaConnectFlowRequest>&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows = std::move(value); }

    /**
     * A list of the MediaConnect Flow ARNs that you want to use as the source of the
     * input. You can specify as few as one
Flow and presently, as many as two. The
     * only requirement is when you have more than one is that each Flow is in
     * a
separate Availability Zone as this ensures your EML input is redundant to AZ
     * issues.

     */
    inline UpdateInputRequest& WithMediaConnectFlows(const Aws::Vector<MediaConnectFlowRequest>& value) { SetMediaConnectFlows(value); return *this;}

    /**
     * A list of the MediaConnect Flow ARNs that you want to use as the source of the
     * input. You can specify as few as one
Flow and presently, as many as two. The
     * only requirement is when you have more than one is that each Flow is in
     * a
separate Availability Zone as this ensures your EML input is redundant to AZ
     * issues.

     */
    inline UpdateInputRequest& WithMediaConnectFlows(Aws::Vector<MediaConnectFlowRequest>&& value) { SetMediaConnectFlows(std::move(value)); return *this;}

    /**
     * A list of the MediaConnect Flow ARNs that you want to use as the source of the
     * input. You can specify as few as one
Flow and presently, as many as two. The
     * only requirement is when you have more than one is that each Flow is in
     * a
separate Availability Zone as this ensures your EML input is redundant to AZ
     * issues.

     */
    inline UpdateInputRequest& AddMediaConnectFlows(const MediaConnectFlowRequest& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.push_back(value); return *this; }

    /**
     * A list of the MediaConnect Flow ARNs that you want to use as the source of the
     * input. You can specify as few as one
Flow and presently, as many as two. The
     * only requirement is when you have more than one is that each Flow is in
     * a
separate Availability Zone as this ensures your EML input is redundant to AZ
     * issues.

     */
    inline UpdateInputRequest& AddMediaConnectFlows(MediaConnectFlowRequest&& value) { m_mediaConnectFlowsHasBeenSet = true; m_mediaConnectFlows.push_back(std::move(value)); return *this; }


    /**
     * Name of the input.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * Name of the input.
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * Name of the input.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * Name of the input.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * Name of the input.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * Name of the input.
     */
    inline UpdateInputRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * Name of the input.
     */
    inline UpdateInputRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * Name of the input.
     */
    inline UpdateInputRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline UpdateInputRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline UpdateInputRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) of the role this input assumes during and after
     * creation.
     */
    inline UpdateInputRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.

     */
    inline const Aws::Vector<InputSourceRequest>& GetSources() const{ return m_sources; }

    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.

     */
    inline bool SourcesHasBeenSet() const { return m_sourcesHasBeenSet; }

    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.

     */
    inline void SetSources(const Aws::Vector<InputSourceRequest>& value) { m_sourcesHasBeenSet = true; m_sources = value; }

    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.

     */
    inline void SetSources(Aws::Vector<InputSourceRequest>&& value) { m_sourcesHasBeenSet = true; m_sources = std::move(value); }

    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.

     */
    inline UpdateInputRequest& WithSources(const Aws::Vector<InputSourceRequest>& value) { SetSources(value); return *this;}

    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.

     */
    inline UpdateInputRequest& WithSources(Aws::Vector<InputSourceRequest>&& value) { SetSources(std::move(value)); return *this;}

    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.

     */
    inline UpdateInputRequest& AddSources(const InputSourceRequest& value) { m_sourcesHasBeenSet = true; m_sources.push_back(value); return *this; }

    /**
     * The source URLs for a PULL-type input. Every PULL type input needs
exactly two
     * source URLs for redundancy.
Only specify sources for PULL type Inputs. Leave
     * Destinations empty.

     */
    inline UpdateInputRequest& AddSources(InputSourceRequest&& value) { m_sourcesHasBeenSet = true; m_sources.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<InputDestinationRequest> m_destinations;
    bool m_destinationsHasBeenSet;

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet;

    Aws::Vector<Aws::String> m_inputSecurityGroups;
    bool m_inputSecurityGroupsHasBeenSet;

    Aws::Vector<MediaConnectFlowRequest> m_mediaConnectFlows;
    bool m_mediaConnectFlowsHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet;

    Aws::Vector<InputSourceRequest> m_sources;
    bool m_sourcesHasBeenSet;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
