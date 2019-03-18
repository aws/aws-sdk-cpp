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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CreateAssociationBatchRequestEntry.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/Fault.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a failed association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/FailedCreateAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API FailedCreateAssociation
  {
  public:
    FailedCreateAssociation();
    FailedCreateAssociation(Aws::Utils::Json::JsonView jsonValue);
    FailedCreateAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The association.</p>
     */
    inline const CreateAssociationBatchRequestEntry& GetEntry() const{ return m_entry; }

    /**
     * <p>The association.</p>
     */
    inline bool EntryHasBeenSet() const { return m_entryHasBeenSet; }

    /**
     * <p>The association.</p>
     */
    inline void SetEntry(const CreateAssociationBatchRequestEntry& value) { m_entryHasBeenSet = true; m_entry = value; }

    /**
     * <p>The association.</p>
     */
    inline void SetEntry(CreateAssociationBatchRequestEntry&& value) { m_entryHasBeenSet = true; m_entry = std::move(value); }

    /**
     * <p>The association.</p>
     */
    inline FailedCreateAssociation& WithEntry(const CreateAssociationBatchRequestEntry& value) { SetEntry(value); return *this;}

    /**
     * <p>The association.</p>
     */
    inline FailedCreateAssociation& WithEntry(CreateAssociationBatchRequestEntry&& value) { SetEntry(std::move(value)); return *this;}


    /**
     * <p>A description of the failure.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the failure.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the failure.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the failure.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the failure.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the failure.</p>
     */
    inline FailedCreateAssociation& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the failure.</p>
     */
    inline FailedCreateAssociation& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the failure.</p>
     */
    inline FailedCreateAssociation& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The source of the failure.</p>
     */
    inline const Fault& GetFault() const{ return m_fault; }

    /**
     * <p>The source of the failure.</p>
     */
    inline bool FaultHasBeenSet() const { return m_faultHasBeenSet; }

    /**
     * <p>The source of the failure.</p>
     */
    inline void SetFault(const Fault& value) { m_faultHasBeenSet = true; m_fault = value; }

    /**
     * <p>The source of the failure.</p>
     */
    inline void SetFault(Fault&& value) { m_faultHasBeenSet = true; m_fault = std::move(value); }

    /**
     * <p>The source of the failure.</p>
     */
    inline FailedCreateAssociation& WithFault(const Fault& value) { SetFault(value); return *this;}

    /**
     * <p>The source of the failure.</p>
     */
    inline FailedCreateAssociation& WithFault(Fault&& value) { SetFault(std::move(value)); return *this;}

  private:

    CreateAssociationBatchRequestEntry m_entry;
    bool m_entryHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Fault m_fault;
    bool m_faultHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
