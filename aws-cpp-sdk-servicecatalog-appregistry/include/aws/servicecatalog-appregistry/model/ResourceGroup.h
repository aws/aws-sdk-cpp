/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
#include <aws/servicecatalog-appregistry/model/ResourceGroupState.h>
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
namespace AppRegistry
{
namespace Model
{

  /**
   * <p>The information about the resource group integration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/ResourceGroup">AWS
   * API Reference</a></p>
   */
  class ResourceGroup
  {
  public:
    AWS_APPREGISTRY_API ResourceGroup();
    AWS_APPREGISTRY_API ResourceGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API ResourceGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The state of the propagation process for the resource group. The states
     * includes:</p> <p> <code>CREATING </code>if the resource group is in the process
     * of being created.</p> <p> <code>CREATE_COMPLETE</code> if the resource group was
     * created successfully.</p> <p> <code>CREATE_FAILED</code> if the resource group
     * failed to be created.</p> <p> <code>UPDATING</code> if the resource group is in
     * the process of being updated.</p> <p> <code>UPDATE_COMPLETE</code> if the
     * resource group updated successfully.</p> <p> <code>UPDATE_FAILED</code> if the
     * resource group could not update successfully.</p>
     */
    inline const ResourceGroupState& GetState() const{ return m_state; }

    /**
     * <p>The state of the propagation process for the resource group. The states
     * includes:</p> <p> <code>CREATING </code>if the resource group is in the process
     * of being created.</p> <p> <code>CREATE_COMPLETE</code> if the resource group was
     * created successfully.</p> <p> <code>CREATE_FAILED</code> if the resource group
     * failed to be created.</p> <p> <code>UPDATING</code> if the resource group is in
     * the process of being updated.</p> <p> <code>UPDATE_COMPLETE</code> if the
     * resource group updated successfully.</p> <p> <code>UPDATE_FAILED</code> if the
     * resource group could not update successfully.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the propagation process for the resource group. The states
     * includes:</p> <p> <code>CREATING </code>if the resource group is in the process
     * of being created.</p> <p> <code>CREATE_COMPLETE</code> if the resource group was
     * created successfully.</p> <p> <code>CREATE_FAILED</code> if the resource group
     * failed to be created.</p> <p> <code>UPDATING</code> if the resource group is in
     * the process of being updated.</p> <p> <code>UPDATE_COMPLETE</code> if the
     * resource group updated successfully.</p> <p> <code>UPDATE_FAILED</code> if the
     * resource group could not update successfully.</p>
     */
    inline void SetState(const ResourceGroupState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the propagation process for the resource group. The states
     * includes:</p> <p> <code>CREATING </code>if the resource group is in the process
     * of being created.</p> <p> <code>CREATE_COMPLETE</code> if the resource group was
     * created successfully.</p> <p> <code>CREATE_FAILED</code> if the resource group
     * failed to be created.</p> <p> <code>UPDATING</code> if the resource group is in
     * the process of being updated.</p> <p> <code>UPDATE_COMPLETE</code> if the
     * resource group updated successfully.</p> <p> <code>UPDATE_FAILED</code> if the
     * resource group could not update successfully.</p>
     */
    inline void SetState(ResourceGroupState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the propagation process for the resource group. The states
     * includes:</p> <p> <code>CREATING </code>if the resource group is in the process
     * of being created.</p> <p> <code>CREATE_COMPLETE</code> if the resource group was
     * created successfully.</p> <p> <code>CREATE_FAILED</code> if the resource group
     * failed to be created.</p> <p> <code>UPDATING</code> if the resource group is in
     * the process of being updated.</p> <p> <code>UPDATE_COMPLETE</code> if the
     * resource group updated successfully.</p> <p> <code>UPDATE_FAILED</code> if the
     * resource group could not update successfully.</p>
     */
    inline ResourceGroup& WithState(const ResourceGroupState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the propagation process for the resource group. The states
     * includes:</p> <p> <code>CREATING </code>if the resource group is in the process
     * of being created.</p> <p> <code>CREATE_COMPLETE</code> if the resource group was
     * created successfully.</p> <p> <code>CREATE_FAILED</code> if the resource group
     * failed to be created.</p> <p> <code>UPDATING</code> if the resource group is in
     * the process of being updated.</p> <p> <code>UPDATE_COMPLETE</code> if the
     * resource group updated successfully.</p> <p> <code>UPDATE_FAILED</code> if the
     * resource group could not update successfully.</p>
     */
    inline ResourceGroup& WithState(ResourceGroupState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline ResourceGroup& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline ResourceGroup& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of the resource group.</p>
     */
    inline ResourceGroup& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The error message that generates when the propagation process for the
     * resource group fails.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>The error message that generates when the propagation process for the
     * resource group fails.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>The error message that generates when the propagation process for the
     * resource group fails.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>The error message that generates when the propagation process for the
     * resource group fails.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>The error message that generates when the propagation process for the
     * resource group fails.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>The error message that generates when the propagation process for the
     * resource group fails.</p>
     */
    inline ResourceGroup& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>The error message that generates when the propagation process for the
     * resource group fails.</p>
     */
    inline ResourceGroup& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message that generates when the propagation process for the
     * resource group fails.</p>
     */
    inline ResourceGroup& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

  private:

    ResourceGroupState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
