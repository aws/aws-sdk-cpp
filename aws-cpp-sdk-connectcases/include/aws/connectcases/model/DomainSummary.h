/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
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
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Object for the summarized details of the domain.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/DomainSummary">AWS
   * API Reference</a></p>
   */
  class DomainSummary
  {
  public:
    AWS_CONNECTCASES_API DomainSummary();
    AWS_CONNECTCASES_API DomainSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API DomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline const Aws::String& GetDomainArn() const{ return m_domainArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline bool DomainArnHasBeenSet() const { return m_domainArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline void SetDomainArn(const Aws::String& value) { m_domainArnHasBeenSet = true; m_domainArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline void SetDomainArn(Aws::String&& value) { m_domainArnHasBeenSet = true; m_domainArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline void SetDomainArn(const char* value) { m_domainArnHasBeenSet = true; m_domainArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline DomainSummary& WithDomainArn(const Aws::String& value) { SetDomainArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline DomainSummary& WithDomainArn(Aws::String&& value) { SetDomainArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the domain.</p>
     */
    inline DomainSummary& WithDomainArn(const char* value) { SetDomainArn(value); return *this;}


    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline DomainSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline DomainSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the domain.</p>
     */
    inline DomainSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_domainArn;
    bool m_domainArnHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
