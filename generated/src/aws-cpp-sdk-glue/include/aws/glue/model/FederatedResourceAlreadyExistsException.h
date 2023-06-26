/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A federated resource already exists.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FederatedResourceAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class FederatedResourceAlreadyExistsException
  {
  public:
    AWS_GLUE_API FederatedResourceAlreadyExistsException();
    AWS_GLUE_API FederatedResourceAlreadyExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FederatedResourceAlreadyExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message describing the problem.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message describing the problem.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message describing the problem.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message describing the problem.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message describing the problem.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message describing the problem.</p>
     */
    inline FederatedResourceAlreadyExistsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message describing the problem.</p>
     */
    inline FederatedResourceAlreadyExistsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message describing the problem.</p>
     */
    inline FederatedResourceAlreadyExistsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The associated Glue resource already exists.</p>
     */
    inline const Aws::String& GetAssociatedGlueResource() const{ return m_associatedGlueResource; }

    /**
     * <p>The associated Glue resource already exists.</p>
     */
    inline bool AssociatedGlueResourceHasBeenSet() const { return m_associatedGlueResourceHasBeenSet; }

    /**
     * <p>The associated Glue resource already exists.</p>
     */
    inline void SetAssociatedGlueResource(const Aws::String& value) { m_associatedGlueResourceHasBeenSet = true; m_associatedGlueResource = value; }

    /**
     * <p>The associated Glue resource already exists.</p>
     */
    inline void SetAssociatedGlueResource(Aws::String&& value) { m_associatedGlueResourceHasBeenSet = true; m_associatedGlueResource = std::move(value); }

    /**
     * <p>The associated Glue resource already exists.</p>
     */
    inline void SetAssociatedGlueResource(const char* value) { m_associatedGlueResourceHasBeenSet = true; m_associatedGlueResource.assign(value); }

    /**
     * <p>The associated Glue resource already exists.</p>
     */
    inline FederatedResourceAlreadyExistsException& WithAssociatedGlueResource(const Aws::String& value) { SetAssociatedGlueResource(value); return *this;}

    /**
     * <p>The associated Glue resource already exists.</p>
     */
    inline FederatedResourceAlreadyExistsException& WithAssociatedGlueResource(Aws::String&& value) { SetAssociatedGlueResource(std::move(value)); return *this;}

    /**
     * <p>The associated Glue resource already exists.</p>
     */
    inline FederatedResourceAlreadyExistsException& WithAssociatedGlueResource(const char* value) { SetAssociatedGlueResource(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_associatedGlueResource;
    bool m_associatedGlueResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
